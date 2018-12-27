//============================================================================
//                                  I B E X
// File        : ibex_CovSolverData.cpp
// Author      : Gilles Chabert
// Copyright   : IMT Atlantique (France)
// License     : See the LICENSE file
// Created     : Nov 08, 2018
// Last update : Dec 24, 2018
//============================================================================

#include "ibex_CovSolverData.h"
#include "ibex_Solver.h"

#include <algorithm>

using namespace std;

namespace ibex {

const unsigned int CovSolverData::FORMAT_VERSION = 1;

const unsigned int CovSolverData::subformat_level = 5;

const unsigned int CovSolverData::subformat_number = 0;

CovSolverData::CovSolverData(size_t n, size_t m, size_t nb_ineq) : CovManifold(n, m, nb_ineq), solver_status((unsigned int) Solver::SUCCESS /* ? */), time(-1), nb_cells(0) {
}

CovSolverData::CovSolverData(const char* filename) : CovManifold(n, m, nb_ineq /* tmp */), solver_status((unsigned int) Solver::SUCCESS), time(-1), nb_cells(0) {
	stack<unsigned int> format_id;
	stack<unsigned int> format_version;
	ifstream* f = CovSolverData::read(filename, *this, format_id, format_version);
	f->close();
	delete f;
}

void CovSolverData::save(const char* filename) const {
	stack<unsigned int> format_id;
	stack<unsigned int> format_version;
	ofstream* of=CovSolverData::write(filename, *this, format_id, format_version);
	of->close();
	delete of;
}


void CovSolverData::add(const IntervalVector& x) {
	add_unknown(x);
}

void CovSolverData::add_inner(const IntervalVector& x) {
	CovManifold::add_inner(x);
	_solver_status.push_back(INNER);
}

void CovSolverData::add_boundary(const IntervalVector& x) {
	CovManifold::add_boundary(x);
	_solver_status.push_back(BOUNDARY);
}

void CovSolverData::add_unknown(const IntervalVector& x) {
	CovManifold::add_unknown(x);
	_solver_status.push_back(UNKNOWN);
	_solver_unknown.push_back(&list.back());
}

void CovSolverData::add_solution(const IntervalVector& existence, const IntervalVector& unicity) {
	CovManifold::add_solution(existence, unicity);
	_solver_status.push_back(SOLUTION);
}

void CovSolverData::add_solution(const IntervalVector& existence, const IntervalVector& unicity, const VarSet& varset) {
	CovManifold::add_solution(existence, unicity, varset);
	_solver_status.push_back(SOLUTION);
}

void CovSolverData::add_pending(const IntervalVector& x) {
	CovManifold::add_unknown(x);
	_solver_status.push_back(PENDING);
	_solver_pending.push_back(&list.back());
}

ostream& operator<<(ostream& os, const CovSolverData& solver) {

	for (size_t i=0; i<solver.nb_solution(); i++) {
		os << " solution n°" << (i+1) << " = " << solver.solution(i) << endl;
	}

	for (size_t i=0; i<solver.nb_inner(); i++) {
		os << " inner n°" << (i+1) << " = " << solver.inner(i) << endl;
	}

	for (size_t i=0; i<solver.nb_boundary(); i++) {
		os << " boundary n°" << (i+1) << " = " << solver.boundary(i) << endl;
	}

	for (size_t i=0; i<solver.nb_unknown(); i++) {
		os << " unknown n°" << (i+1) << " = " << solver.unknown(i) << endl;
	}

	for (size_t i=0; i<solver.nb_pending(); i++) {
		os << " pending n°" << (i+1) << " = " << solver.pending(i) << endl;
	}

	return os;

}

void CovSolverData::read_vars(ifstream& f, size_t n, vector<string>& var_names) {
	char x;
	for (size_t i=0; i<n; i++) {
		stringstream s;
		do {
			f.read(&x, sizeof(char));
			if (f.eof()) ibex_error("[CovManifold]: unexpected end of file.");
			if (x!='\0') s << x;
		} while(x!='\0');
		var_names.push_back(s.str());
	}
}

void CovSolverData::write_vars(ofstream& f, const vector<string>& var_names) {
	for (vector<string>::const_iterator it=var_names.begin(); it!=var_names.end(); it++) {
		f.write(it->c_str(),it->size()*sizeof(char));
		f.put('\0');
	}
}

ifstream* CovSolverData::read(const char* filename, CovSolverData& cov, std::stack<unsigned int>& format_id, std::stack<unsigned int>& format_version) {

	ifstream* f = CovManifold::read(filename, cov, format_id, format_version);

	size_t nb_pending;

	if (format_id.empty() || format_id.top()!=subformat_number || format_version.top()!=FORMAT_VERSION) {
		cov.solver_status = (unsigned int) Solver::SUCCESS;
		cov.time = -1;
		cov.nb_cells = 0;
		nb_pending = 0;
	}
	else {
		format_id.pop();
		format_version.pop();

		read_vars(*f, cov.n, cov.var_names);

		unsigned int status = read_pos_int(*f);

		switch (status) {
		case 0: cov.solver_status = (unsigned int) Solver::SUCCESS;           break;
		case 1: cov.solver_status = (unsigned int) Solver::INFEASIBLE;        break;
		case 2: cov.solver_status = (unsigned int) Solver::NOT_ALL_VALIDATED; break;
		case 3: cov.solver_status = (unsigned int) Solver::TIME_OUT;          break;
		case 4: cov.solver_status = (unsigned int) Solver::CELL_OVERFLOW;     break;
		default: ibex_error("[CovSolverData]: invalid solver status.");
		}

		cov.time = read_double(*f);
		cov.nb_cells = read_pos_int(*f);

		nb_pending = read_pos_int(*f);
	}

	if (nb_pending > cov.CovManifold::nb_unknown())
		ibex_error("[CovSolverData]: number of pending boxes > number of CovManifold unknown boxes");

	unsigned int indices[nb_pending];
	for (size_t i=0; i<nb_pending; i++) {
		indices[i]=read_pos_int(*f);
	}

	if (nb_pending>0)
		sort(indices,indices+nb_pending);


	size_t i2=0; // counter of pending boxes

	for (size_t i=0; i<cov.size(); i++) {

		if (i2<nb_pending && i==indices[i2]) {
			if (!cov.CovManifold::is_unknown(i))
				ibex_error("[CovSolverData]: a pending box must be a CovManifold unknown box.");
			cov._solver_pending.push_back(cov.vec[i]);
			cov._solver_status.push_back(CovSolverData::PENDING);
			i2++;
		} else {
			switch(cov.CovManifold::status(i)) {
			case CovManifold::INNER :
				cov._solver_status.push_back(CovSolverData::INNER);
				break;
			case CovManifold::SOLUTION :
				cov._solver_status.push_back(CovSolverData::SOLUTION);
				break;
			case CovManifold::BOUNDARY :
				cov._solver_status.push_back(CovSolverData::BOUNDARY);
				break;
			default :
				cov._solver_unknown.push_back(cov.vec[i]);
				cov._solver_status.push_back(CovSolverData::UNKNOWN);
			}
		}

	}
	if (i2<nb_pending) ibex_error("[CovSolverData]: invalid solution box index.");

	if (cov.nb_pending() != nb_pending)
		ibex_error("[CovSolverDataFiile]: number of solution boxes does not match.");

	return f;
}

ofstream* CovSolverData::write(const char* filename, const CovSolverData& cov, std::stack<unsigned int>& format_id, std::stack<unsigned int>& format_version) {

	format_id.push(subformat_number);
	format_version.push(FORMAT_VERSION);

	ofstream* f = CovManifold::write(filename, cov, format_id, format_version);

	write_vars(*f, cov.var_names);
	write_pos_int(*f, cov.solver_status);
	write_double(*f, cov.time);
	write_pos_int(*f, cov.nb_cells);
	write_pos_int(*f, cov.nb_pending());

	// TODO: a complete scan could be avoided?
	for (size_t i=0; i<cov.size(); i++) {
		if (cov.status(i)==CovSolverData::PENDING)
			write_pos_int(*f, (uint32_t) i);
	}
	return f;
}

void CovSolverData::format(stringstream& ss, const string& title, std::stack<unsigned int>& format_id, std::stack<unsigned int>& format_version) {
	format_id.push(subformat_number);
	format_version.push(FORMAT_VERSION);

	CovManifold::format(ss, title, format_id, format_version);

	ss
	<< space << " - n strings:      the names of variables. Each string is\n"
	<< space << "                   terminated by the null character \'0\'.\n"
	<< space << " - 1 integer:      the status of the search. Possible \n"
	<< space << "                   values are:\n"
	<< space << "                   - 0=complete search: all output boxes\n"
	<< space << "                     are validated\n"
	<< space << "                   - 1=complete search: infeasible problem\n"
	<< "|   CovSolverData   |" <<
	            "                   - 2=incomplete search: minimal width\n"
	<< space << "                     (--eps-min) reached\n"
	<< space << "                   - 3=incomplete search: time out\n"
	<< space << "                   - 4=incomplete search: buffer overflow\n"
	<< space << " - 1 real value:   time (in seconds)\n"
	<< space << " - 1 integer:      the number of cells.\n"
	<< space << " - 1 value:        the number Np of pending boxes\n"
	<< space << " - Np integers:    the indices of pending boxes\n"
	<< space << "                   (a subset of CovIUList unknown boxes).\n"
	<< separator;
}

string CovSolverData::format() {
	stringstream ss;
	stack<unsigned int> format_id;
	stack<unsigned int> format_version;
	format(ss, "CovSolverData", format_id, format_version);
	return ss.str();
}

} // end namespace

