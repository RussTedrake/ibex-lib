/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ibexparse
#define yylex           ibexlex
#define yyerror         ibexerror
#define yydebug         ibexdebug
#define yynerrs         ibexnerrs

#define yylval          ibexlval
#define yychar          ibexchar

/* Copy the first part of user declarations.  */
#line 1 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:339  */

//============================================================================
//                                  I B E X                                   
// File        : Yacc/Bison input for Ibex parser
// Author      : Gilles Chabert
// Copyright   : IMT Atlantique (France)
// License     : See the LICENSE file
// Created     : Jun 12, 2012
// Last Update : Nov 03, 2019
//===========================================================================

#include "ibex_P_Struct.h"

using namespace ibex;
using namespace parser;
using namespace std;


#line 93 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.hh".  */
#ifndef YY_IBEX_HOME_RUSST_TMP_IBEX_LIB_BUILD_SRC_PARSER_PARSER_TAB_HH_INCLUDED
# define YY_IBEX_HOME_RUSST_TMP_IBEX_LIB_BUILD_SRC_PARSER_PARSER_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ibexdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_CHOCO = 258,
    TK_CONSTANT = 259,
    TK_NEW_SYMBOL = 260,
    TK_FUNC_SYMBOL = 261,
    TK_EXPR_TMP_SYMBOL = 262,
    TK_ENTITY = 263,
    TK_ITERATOR = 264,
    TK_UNARY_OP = 265,
    TK_BINARY_OP = 266,
    TK_STRING = 267,
    TK_INT_CST = 268,
    TK_FLOAT = 269,
    TK_PI = 270,
    TK_INFINITY = 271,
    TK_BOOL = 272,
    TK_PARAM = 273,
    TK_CONST = 274,
    TK_VARS = 275,
    TK_FUNCTION = 276,
    TK_DIFF = 277,
    TK_MIN = 278,
    TK_MAX = 279,
    TK_INF = 280,
    TK_MID = 281,
    TK_SUP = 282,
    TK_SIGN = 283,
    TK_ABS = 284,
    TK_SUM = 285,
    TK_SQRT = 286,
    TK_EXPO = 287,
    TK_LOG = 288,
    TK_COS = 289,
    TK_SIN = 290,
    TK_TAN = 291,
    TK_ACOS = 292,
    TK_ASIN = 293,
    TK_ATAN = 294,
    TK_ATAN2 = 295,
    TK_COSH = 296,
    TK_SINH = 297,
    TK_TANH = 298,
    TK_ACOSH = 299,
    TK_ASINH = 300,
    TK_ATANH = 301,
    TK_FLOOR = 302,
    TK_CEIL = 303,
    TK_INTEGER = 304,
    TK_LEQ = 305,
    TK_GEQ = 306,
    TK_EQU = 307,
    TK_ASSIGN = 308,
    TK_CHI = 309,
    TK_BEGIN = 310,
    TK_END = 311,
    TK_FOR = 312,
    TK_FROM = 313,
    TK_TO = 314,
    TK_RETURN = 315,
    TK_CTRS = 316,
    TK_MINIMIZE = 317,
    TK_IN = 318,
    TK_UNION = 319,
    TK_INTERSEC = 320
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:355  */

  char*     str;
  int       itg;
  double    real;
  
  ibex::Interval* itv;
  
  ibex::Dim*      dim;
  
  ibex::parser::P_NumConstraint*                constraint;
  std::vector<ibex::parser::P_NumConstraint*>*  constraints;

  const ibex::parser::P_ExprNode*               expression;
  std::vector<const ibex::parser::P_ExprNode*>* expressions;


#line 216 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ibexlval;

int ibexparse (void);

#endif /* !YY_IBEX_HOME_RUSST_TMP_IBEX_LIB_BUILD_SRC_PARSER_PARSER_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 233 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   992

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  323

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    73,
      75,    79,    69,    66,    77,    67,     2,    70,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    76,
      64,     2,    65,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    78,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,    82,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    68,
      71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    92,    96,    96,   100,   104,   107,   114,
     115,   116,   119,   120,   123,   127,   132,   133,   134,   137,
     139,   144,   145,   147,   151,   159,   160,   163,   163,   178,
     178,   180,   181,   184,   188,   189,   192,   194,   202,   203,
     210,   211,   211,   215,   218,   219,   223,   224,   228,   227,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   252,
     253,   254,   255,   256,   257,   259,   258,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     293,   294,   295,   296,   297,   298,   299,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   325,   326,   330,
     331,   335,   336,   337
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_CHOCO", "TK_CONSTANT",
  "TK_NEW_SYMBOL", "TK_FUNC_SYMBOL", "TK_EXPR_TMP_SYMBOL", "TK_ENTITY",
  "TK_ITERATOR", "TK_UNARY_OP", "TK_BINARY_OP", "TK_STRING", "TK_INT_CST",
  "TK_FLOAT", "TK_PI", "TK_INFINITY", "TK_BOOL", "TK_PARAM", "TK_CONST",
  "TK_VARS", "TK_FUNCTION", "TK_DIFF", "TK_MIN", "TK_MAX", "TK_INF",
  "TK_MID", "TK_SUP", "TK_SIGN", "TK_ABS", "TK_SUM", "TK_SQRT", "TK_EXPO",
  "TK_LOG", "TK_COS", "TK_SIN", "TK_TAN", "TK_ACOS", "TK_ASIN", "TK_ATAN",
  "TK_ATAN2", "TK_COSH", "TK_SINH", "TK_TANH", "TK_ACOSH", "TK_ASINH",
  "TK_ATANH", "TK_FLOOR", "TK_CEIL", "TK_INTEGER", "TK_LEQ", "TK_GEQ",
  "TK_EQU", "TK_ASSIGN", "TK_CHI", "TK_BEGIN", "TK_END", "TK_FOR",
  "TK_FROM", "TK_TO", "TK_RETURN", "TK_CTRS", "TK_MINIMIZE", "TK_IN",
  "'<'", "'>'", "'+'", "'-'", "TK_UNION", "'*'", "'/'", "TK_INTERSEC",
  "'^'", "'\\''", "'['", "'('", "';'", "','", "']'", "')'", "':'", "'{'",
  "'}'", "$accept", "program", "$@1", "$@2", "system_or_func", "choco_ctr",
  "decl_opt_cst", "decl_cst_list", "decl_cst", "decl_var_list", "decl_var",
  "dimension", "interval", "decl_opt_fncs", "function", "$@3",
  "semicolon_opt", "fnc_inpt_list", "fnc_input", "fnc_code", "fnc_assign",
  "decl_opt_goal", "decl_opt_ctrs", "$@4", "ctr_blk_list", "ctr_blk_list_",
  "ctr_blk", "ctr_loop", "$@5", "ctr", "expr", "$@6", "expr_row",
  "expr_col", "expr_index", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    60,    62,    43,    45,   319,    42,
      47,   320,    94,    39,    91,    40,    59,    44,    93,    41,
      58,   123,   125
};
# endif

#define YYPACT_NINF -205

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-205)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      97,     9,    -6,   262,  -205,    25,  -205,  -205,    23,    44,
    -205,  -205,  -205,    49,    82,  -205,  -205,  -205,  -205,    90,
      91,   102,   103,   105,   107,   108,   111,   119,   120,   121,
     127,   130,   135,   136,   138,   140,   141,   144,   145,   146,
     147,   148,   150,   152,   153,   159,   166,   168,   132,   494,
     494,   494,   494,   340,   233,  -205,  -205,  -205,    96,  -205,
    -205,  -205,    89,   175,   180,  -205,    62,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   253,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     208,   494,   798,   -58,   -58,   810,   182,    29,    30,   -21,
     181,   262,  -205,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,  -205,   416,   416,   494,    58,    25,
     257,  -205,  -205,  -205,   -13,   178,    52,   248,   822,   834,
      55,    56,    59,   326,   399,   477,   504,   515,   222,   526,
     537,   548,   559,   570,   581,   592,   603,   614,   846,   625,
     636,   647,   658,   669,   680,   691,   702,   713,   858,   494,
     163,   494,   494,  -205,   494,   494,  -205,   494,  -205,   494,
    -205,  -205,  -205,   -13,   -13,   -13,   -13,   -13,   -13,   -58,
     -58,    40,    40,    72,  -205,   101,   201,    65,   768,   494,
     494,  -205,   175,    14,  -205,   275,  -205,  -205,  -205,   494,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   494,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   494,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   494,   118,
     895,   778,   -13,   -13,   -13,   -13,   494,  -205,   416,  -205,
     207,   -13,   -13,   219,   257,   257,   237,   724,   134,   735,
     870,   494,  -205,  -205,   -13,   204,   494,   494,  -205,   -11,
    -205,   308,  -205,   494,  -205,   494,   905,  -205,   788,   -13,
     494,   263,   175,    66,  -205,   882,   746,  -205,  -205,   916,
    -205,  -205,  -205,   308,  -205,  -205,  -205,   262,  -205,  -205,
     262,  -205,     3,   494,    96,   269,   278,   279,   494,   256,
     757,   277,  -205,   494,   494,   916,  -205,  -205,  -205,   -13,
     -13,   282,  -205
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     9,     0,     1,    10,    26,   103,     0,     0,
     102,    99,   101,     0,     0,   109,   106,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,   110,     8,    30,    45,
      46,    47,     0,    21,     0,    12,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    68,     0,     0,     0,     0,     0,
       0,    29,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,    11,
       0,    27,     3,    25,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,    91,     0,    97,     0,
      98,   100,    44,    51,    52,    50,    55,    53,    54,    59,
      61,    60,    62,    93,   121,   122,     0,     0,     0,     0,
       0,    13,    21,     0,    16,     0,   104,   105,   115,     0,
     114,    64,    63,   111,   112,   113,    70,    69,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,    85,    86,    87,    88,    56,     0,     0,
       0,     0,   120,   118,   117,   119,     0,    94,     0,    95,
      22,    14,    15,    19,    26,     0,     0,     0,     0,     0,
       0,     0,    92,    24,   123,     0,     0,     0,    17,    38,
      18,     0,   116,     0,    67,     0,     0,    96,     0,    20,
       0,    40,    21,     0,    32,     0,     0,    48,    23,    30,
      41,     6,    33,     0,    35,    65,    89,     0,    29,    39,
       0,    31,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    30,    34,    66,    49,    37,
      36,     0,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   205,  -205,
    -106,  -196,  -205,    81,  -205,  -205,  -204,  -205,    46,  -205,
    -205,  -205,  -205,  -205,    41,    43,   231,  -205,  -205,   299,
     -49,  -205,    16,  -205,  -121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,   132,    55,     6,    64,    65,   203,
     204,   128,    56,    66,   133,   205,   112,   283,   284,   302,
     309,   281,   291,   300,    57,    58,    59,    60,   297,    61,
      62,   303,   108,   109,   196
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     102,   103,   104,   105,   107,   197,   253,   306,   307,     4,
     131,   121,   122,     5,   123,   124,   125,   126,   134,   135,
     137,   138,   139,   139,   139,   143,   144,   145,   146,   147,
      63,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   280,   170,   119,   120,   179,   121,   122,   180,   123,
     124,   125,   126,   308,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,    67,   195,   195,   198,   113,
     114,   115,   130,   131,   136,   299,   292,   140,   141,   142,
     254,   255,   116,   117,   118,   119,   120,    -2,   121,   122,
     311,   123,   124,   125,   126,   174,   175,   177,   176,   178,
     199,   321,   123,   124,   125,   126,    -2,    -2,    -2,    68,
     239,   200,   240,   241,    69,   242,   243,   265,   244,   177,
     245,   207,   177,   177,   210,   211,   177,   100,   212,   113,
     114,   115,   248,   293,   249,   294,   125,   126,   268,   270,
     251,   252,   116,   117,   118,   119,   120,    70,   121,   122,
     257,   123,   124,   125,   126,    71,    72,   119,   120,   258,
     121,   122,   111,   123,   124,   125,   126,    73,    74,   259,
      75,   246,    76,    77,   119,   120,    78,   121,   122,   260,
     123,   124,   125,   126,    79,    80,    81,   264,   261,   195,
     119,   120,    82,   121,   122,    83,   123,   124,   125,   126,
      84,    85,   276,    86,   273,    87,    88,   278,   279,    89,
      90,    91,    92,    93,   285,    94,   286,    95,    96,   119,
     120,   289,   121,   122,    97,   123,   124,   125,   126,   174,
     175,    98,   176,    99,   119,   120,   110,   121,   122,   127,
     123,   124,   125,   126,   310,   175,   129,   206,   148,   315,
     169,   173,   202,   181,   319,   320,     7,     8,     9,    10,
      11,    12,    13,    14,   218,    15,    16,    17,    18,   247,
     256,   266,   267,   277,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,   271,   282,   119,   120,    47,   121,   122,    48,
     123,   124,   125,   126,   290,   312,    49,   208,    50,    51,
     313,   314,   316,   318,   201,   269,    52,    53,   322,   301,
     304,   305,   182,    54,     7,     8,     9,    10,    11,    12,
      13,    14,   106,    15,    16,    17,    18,     0,     0,     0,
       0,     0,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       0,     0,   119,   120,    47,   121,   122,     0,   123,   124,
     125,   126,     0,     0,    49,   213,    50,    51,     0,     0,
       0,     0,     0,     0,    52,    53,     0,     0,     0,     0,
       7,    54,     9,    10,    11,    12,    13,    14,     0,    15,
      16,    17,    18,     0,     0,     0,     0,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,   119,   120,     0,   121,   122,
      47,   123,   124,   125,   126,     0,     0,     0,   214,     0,
      49,     0,    50,    51,     0,     0,     0,     0,     0,     0,
      52,   101,     0,     0,     0,     0,   194,    54,     7,     0,
       9,    10,    11,    12,    13,    14,     0,    15,    16,    17,
      18,     0,     0,     0,     0,     0,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,   119,   120,     0,   121,   122,    47,   123,
     124,   125,   126,     0,     0,     0,   215,     0,    49,     0,
      50,    51,     0,     0,     0,     0,     0,     0,    52,   101,
     119,   120,     0,   121,   122,    54,   123,   124,   125,   126,
       0,   119,   120,   216,   121,   122,     0,   123,   124,   125,
     126,     0,   119,   120,   217,   121,   122,     0,   123,   124,
     125,   126,     0,   119,   120,   219,   121,   122,     0,   123,
     124,   125,   126,     0,   119,   120,   220,   121,   122,     0,
     123,   124,   125,   126,     0,   119,   120,   221,   121,   122,
       0,   123,   124,   125,   126,     0,   119,   120,   222,   121,
     122,     0,   123,   124,   125,   126,     0,   119,   120,   223,
     121,   122,     0,   123,   124,   125,   126,     0,   119,   120,
     224,   121,   122,     0,   123,   124,   125,   126,     0,   119,
     120,   225,   121,   122,     0,   123,   124,   125,   126,     0,
     119,   120,   226,   121,   122,     0,   123,   124,   125,   126,
       0,   119,   120,   227,   121,   122,     0,   123,   124,   125,
     126,     0,   119,   120,   229,   121,   122,     0,   123,   124,
     125,   126,     0,   119,   120,   230,   121,   122,     0,   123,
     124,   125,   126,     0,   119,   120,   231,   121,   122,     0,
     123,   124,   125,   126,     0,   119,   120,   232,   121,   122,
       0,   123,   124,   125,   126,     0,   119,   120,   233,   121,
     122,     0,   123,   124,   125,   126,     0,   119,   120,   234,
     121,   122,     0,   123,   124,   125,   126,     0,   119,   120,
     235,   121,   122,     0,   123,   124,   125,   126,     0,   119,
     120,   236,   121,   122,     0,   123,   124,   125,   126,     0,
     119,   120,   237,   121,   122,     0,   123,   124,   125,   126,
       0,   119,   120,   272,   121,   122,     0,   123,   124,   125,
     126,     0,   119,   120,   274,   121,   122,     0,   123,   124,
     125,   126,     0,   119,   120,   296,   121,   122,     0,   123,
     124,   125,   126,     0,   119,   120,   317,   121,   122,     0,
     123,   124,   125,   126,   119,   120,   250,   121,   122,     0,
     123,   124,   125,   126,   119,   120,   263,   121,   122,     0,
     123,   124,   125,   126,   119,   120,   288,   121,   122,     0,
     123,   124,   125,   126,     0,   171,   119,   120,     0,   121,
     122,     0,   123,   124,   125,   126,     0,   172,   119,   120,
       0,   121,   122,     0,   123,   124,   125,   126,     0,   209,
     119,   120,     0,   121,   122,     0,   123,   124,   125,   126,
       0,   175,   119,   120,     0,   121,   122,     0,   123,   124,
     125,   126,     0,   228,   119,   120,     0,   121,   122,     0,
     123,   124,   125,   126,     0,   238,   119,   120,     0,   121,
     122,     0,   123,   124,   125,   126,     0,   275,   119,   120,
       0,   121,   122,     0,   123,   124,   125,   126,     0,   295,
     262,   119,   120,     0,   121,   122,     0,   123,   124,   125,
     126,   119,   120,     0,   121,   122,     0,   123,   124,   125,
     126,   287,   119,   120,     0,   121,   122,     0,   123,   124,
     125,   126,   298
};

static const yytype_int16 yycheck[] =
{
      49,    50,    51,    52,    53,   126,   202,     4,     5,     0,
      21,    69,    70,    19,    72,    73,    74,    75,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
       5,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    62,   101,    66,    67,    76,    69,    70,    79,    72,
      73,    74,    75,    60,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    52,   125,   126,   127,    50,
      51,    52,    20,    21,    68,   289,   282,    71,    72,    73,
      76,    77,    63,    64,    65,    66,    67,     0,    69,    70,
     304,    72,    73,    74,    75,    76,    77,    77,    79,    79,
      52,   315,    72,    73,    74,    75,    19,    20,    21,    75,
     169,    63,   171,   172,    75,   174,   175,   248,   177,    77,
     179,    79,    77,    77,    79,    79,    77,     5,    79,    50,
      51,    52,    77,    77,    79,    79,    74,    75,   254,   255,
     199,   200,    63,    64,    65,    66,    67,    75,    69,    70,
     209,    72,    73,    74,    75,    75,    75,    66,    67,   218,
      69,    70,    76,    72,    73,    74,    75,    75,    75,   228,
      75,    80,    75,    75,    66,    67,    75,    69,    70,   238,
      72,    73,    74,    75,    75,    75,    75,   246,    80,   248,
      66,    67,    75,    69,    70,    75,    72,    73,    74,    75,
      75,    75,   261,    75,    80,    75,    75,   266,   267,    75,
      75,    75,    75,    75,   273,    75,   275,    75,    75,    66,
      67,   280,    69,    70,    75,    72,    73,    74,    75,    76,
      77,    75,    79,    75,    66,    67,    13,    69,    70,    74,
      72,    73,    74,    75,   303,    77,    76,    79,     5,   308,
      52,    79,     5,    82,   313,   314,     4,     5,     6,     7,
       8,     9,    10,    11,    52,    13,    14,    15,    16,    78,
       5,    74,    63,    79,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    75,     5,    66,    67,    54,    69,    70,    57,
      72,    73,    74,    75,    61,    56,    64,    79,    66,    67,
      52,    52,    76,    56,   129,   254,    74,    75,    56,   293,
     297,   300,   111,    81,     4,     5,     6,     7,     8,     9,
      10,    11,    53,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    66,    67,    54,    69,    70,    -1,    72,    73,
      74,    75,    -1,    -1,    64,    79,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,
       4,    81,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    66,    67,    -1,    69,    70,
      54,    72,    73,    74,    75,    -1,    -1,    -1,    79,    -1,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    -1,    -1,    -1,    -1,    80,    81,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    66,    67,    -1,    69,    70,    54,    72,
      73,    74,    75,    -1,    -1,    -1,    79,    -1,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      66,    67,    -1,    69,    70,    81,    72,    73,    74,    75,
      -1,    66,    67,    79,    69,    70,    -1,    72,    73,    74,
      75,    -1,    66,    67,    79,    69,    70,    -1,    72,    73,
      74,    75,    -1,    66,    67,    79,    69,    70,    -1,    72,
      73,    74,    75,    -1,    66,    67,    79,    69,    70,    -1,
      72,    73,    74,    75,    -1,    66,    67,    79,    69,    70,
      -1,    72,    73,    74,    75,    -1,    66,    67,    79,    69,
      70,    -1,    72,    73,    74,    75,    -1,    66,    67,    79,
      69,    70,    -1,    72,    73,    74,    75,    -1,    66,    67,
      79,    69,    70,    -1,    72,    73,    74,    75,    -1,    66,
      67,    79,    69,    70,    -1,    72,    73,    74,    75,    -1,
      66,    67,    79,    69,    70,    -1,    72,    73,    74,    75,
      -1,    66,    67,    79,    69,    70,    -1,    72,    73,    74,
      75,    -1,    66,    67,    79,    69,    70,    -1,    72,    73,
      74,    75,    -1,    66,    67,    79,    69,    70,    -1,    72,
      73,    74,    75,    -1,    66,    67,    79,    69,    70,    -1,
      72,    73,    74,    75,    -1,    66,    67,    79,    69,    70,
      -1,    72,    73,    74,    75,    -1,    66,    67,    79,    69,
      70,    -1,    72,    73,    74,    75,    -1,    66,    67,    79,
      69,    70,    -1,    72,    73,    74,    75,    -1,    66,    67,
      79,    69,    70,    -1,    72,    73,    74,    75,    -1,    66,
      67,    79,    69,    70,    -1,    72,    73,    74,    75,    -1,
      66,    67,    79,    69,    70,    -1,    72,    73,    74,    75,
      -1,    66,    67,    79,    69,    70,    -1,    72,    73,    74,
      75,    -1,    66,    67,    79,    69,    70,    -1,    72,    73,
      74,    75,    -1,    66,    67,    79,    69,    70,    -1,    72,
      73,    74,    75,    -1,    66,    67,    79,    69,    70,    -1,
      72,    73,    74,    75,    66,    67,    78,    69,    70,    -1,
      72,    73,    74,    75,    66,    67,    78,    69,    70,    -1,
      72,    73,    74,    75,    66,    67,    78,    69,    70,    -1,
      72,    73,    74,    75,    -1,    77,    66,    67,    -1,    69,
      70,    -1,    72,    73,    74,    75,    -1,    77,    66,    67,
      -1,    69,    70,    -1,    72,    73,    74,    75,    -1,    77,
      66,    67,    -1,    69,    70,    -1,    72,    73,    74,    75,
      -1,    77,    66,    67,    -1,    69,    70,    -1,    72,    73,
      74,    75,    -1,    77,    66,    67,    -1,    69,    70,    -1,
      72,    73,    74,    75,    -1,    77,    66,    67,    -1,    69,
      70,    -1,    72,    73,    74,    75,    -1,    77,    66,    67,
      -1,    69,    70,    -1,    72,    73,    74,    75,    -1,    77,
      65,    66,    67,    -1,    69,    70,    -1,    72,    73,    74,
      75,    66,    67,    -1,    69,    70,    -1,    72,    73,    74,
      75,    76,    66,    67,    -1,    69,    70,    -1,    72,    73,
      74,    75,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    84,    85,    86,     0,    19,    89,     4,     5,     6,
       7,     8,     9,    10,    11,    13,    14,    15,    16,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    54,    57,    64,
      66,    67,    74,    75,    81,    88,    95,   107,   108,   109,
     110,   112,   113,     5,    90,    91,    96,    52,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
       5,    75,   113,   113,   113,   113,   112,   113,   115,   116,
      13,    76,    99,    50,    51,    52,    63,    64,    65,    66,
      67,    69,    70,    72,    73,    74,    75,    74,    94,    76,
      20,    21,    87,    97,   113,   113,   115,   113,   113,   113,
     115,   115,   115,   113,   113,   113,   113,   113,     5,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,    52,
     113,    77,    77,    79,    76,    77,    79,    77,    79,    76,
      79,    82,   109,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,    80,   113,   117,   117,   113,    52,
      63,    91,     5,    92,    93,    98,    79,    79,    79,    77,
      79,    79,    79,    79,    79,    79,    79,    79,    52,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    77,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    77,   113,
     113,   113,   113,   113,   113,   113,    80,    78,    77,    79,
      78,   113,   113,    94,    76,    77,     5,   113,   113,   113,
     113,    80,    65,    78,   113,   117,    74,    63,    93,    96,
      93,    75,    79,    80,    79,    77,   113,    79,   113,   113,
      62,   104,     5,   100,   101,   113,   113,    76,    78,   113,
      61,   105,    94,    77,    79,    77,    79,   111,    76,    99,
     106,   101,   102,   114,   108,   107,     4,     5,    60,   103,
     113,    99,    56,    52,    52,   113,    76,    79,    56,   113,
     113,    99,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    85,    84,    86,    84,    87,    87,    88,    89,
      89,    89,    90,    90,    91,    91,    92,    92,    92,    93,
      93,    94,    94,    94,    95,    96,    96,    98,    97,    99,
      99,   100,   100,   101,   102,   102,   103,   103,   104,   104,
     105,   106,   105,   107,   108,   108,   109,   109,   111,   110,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   114,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   115,   115,   116,
     116,   117,   117,   117
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     0,     2,     6,     0,     1,     0,
       1,     3,     1,     3,     4,     4,     1,     3,     3,     2,
       4,     0,     3,     6,     5,     2,     0,     0,    11,     1,
       0,     3,     1,     2,     3,     0,     3,     3,     0,     3,
       0,     0,     4,     2,     3,     1,     1,     1,     0,    11,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     3,     3,     4,     4,     0,    11,     6,     2,     4,
       4,     2,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     8,
       2,     3,     5,     3,     4,     4,     6,     3,     3,     1,
       3,     1,     1,     1,     4,     4,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     6,     3,     3,     3,
       3,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 92 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->begin(); }
#line 1667 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 95 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->end(); }
#line 1673 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 96 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->begin(); }
#line 1679 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 97 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->end(); }
#line 1685 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 124 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->scopes.top().add_cst((yyvsp[-3].str), (yyvsp[-2].dim), (yyvsp[0].expression)->_2domain()); 
                                                  free((yyvsp[-3].str)); delete (yyvsp[-2].dim); delete (yyvsp[0].expression); }
#line 1692 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 128 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->scopes.top().add_cst((yyvsp[-3].str), (yyvsp[-2].dim), (yyvsp[0].expression)->_2domain()); 
                                                  free((yyvsp[-3].str)); delete (yyvsp[-2].dim); delete (yyvsp[0].expression); }
#line 1699 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 137 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->scopes.top().add_var((yyvsp[-1].str),(yyvsp[0].dim));  
		                                          free((yyvsp[-1].str)); delete (yyvsp[0].dim); }
#line 1706 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 140 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->scopes.top().add_var((yyvsp[-3].str),(yyvsp[-2].dim),(yyvsp[0].expression)->_2domain()); 
						                          free((yyvsp[-3].str)); delete (yyvsp[-2].dim); delete (yyvsp[0].expression); }
#line 1713 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 144 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.dim)=new Dim(); }
#line 1719 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 145 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.dim)=new Dim(Dim::col_vec((yyvsp[-1].expression)->_2int())); 
                                                  delete (yyvsp[-1].expression);  }
#line 1726 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 147 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.dim)=new Dim(Dim::matrix((yyvsp[-4].expression)->_2int(),(yyvsp[-1].expression)->_2int())); 
                                                  delete (yyvsp[-4].expression); delete (yyvsp[-1].expression); }
#line 1733 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 151 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.itv)=new Interval((yyvsp[-3].expression)->_2dbl(true), (yyvsp[-1].expression)->_2dbl(false)); 
                                                  delete (yyvsp[-3].expression); delete (yyvsp[-1].expression); }
#line 1740 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 163 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->scopes.push(P_Scope(pstruct->scopes.top(),true)); }
#line 1746 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 168 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { 
                								  // TODO: simplify the expression (beware of constants that should be "locked")
                								  Function* f=new Function(pstruct->scopes.top().var_symbols(),(yyvsp[-2].expression)->generate(),(yyvsp[-8].str));        
                                                  pstruct->scopes.pop();
                                                  pstruct->scopes.top().add_func((yyvsp[-8].str),f);
                                                  pstruct->source.func.push_back(f);
                                                  free((yyvsp[-8].str)); delete (yyvsp[-2].expression);
                                                 }
#line 1759 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 184 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->scopes.top().add_var((yyvsp[-1].str),(yyvsp[0].dim));
                                                  free((yyvsp[-1].str)); delete (yyvsp[0].dim); }
#line 1766 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 192 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { /* TODO: if this tmp symbol is not used, the generated expr will never be deleted */
                                                  pstruct->scopes.top().add_expr_tmp_symbol((yyvsp[-2].str),&(yyvsp[0].expression)->generate()); free((yyvsp[-2].str)); delete (yyvsp[0].expression); }
#line 1773 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 194 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { cerr << "Warning: line " << ibex_lineno << ", local variable " << (yyvsp[-2].str) << " shadows the constant of the same name\n"; 
                                                  pstruct->scopes.top().rem_cst((yyvsp[-2].str));
                                                  pstruct->scopes.top().add_expr_tmp_symbol((yyvsp[-2].str),&(yyvsp[0].expression)->generate()); free((yyvsp[-2].str)); delete (yyvsp[0].expression); }
#line 1781 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 202 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->source.goal = NULL; }
#line 1787 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 203 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->source.goal = (yyvsp[-1].expression); }
#line 1793 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 211 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->scopes.push(pstruct->scopes.top()); /* new scope for temporary symbols */ }
#line 1799 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 212 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->scopes.pop(); }
#line 1805 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 215 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->source.ctrs=new P_ConstraintList((yyvsp[-1].constraints)); }
#line 1811 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 218 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyvsp[-2].constraints)->push_back((yyvsp[0].constraint)); (yyval.constraints) = (yyvsp[-2].constraints); }
#line 1817 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 219 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraints) = new vector<P_NumConstraint*>();
              								      (yyval.constraints)->push_back((yyvsp[0].constraint)); }
#line 1824 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 223 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = (yyvsp[0].constraint); }
#line 1830 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 224 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = (yyvsp[0].constraint); }
#line 1836 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 228 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { pstruct->scopes.push(pstruct->scopes.top());
						       					  pstruct->scopes.top().add_iterator((yyvsp[-5].str)); }
#line 1843 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 231 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = new P_ConstraintLoop((yyvsp[-9].str), (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-2].constraints)); 
						                          pstruct->scopes.pop();
		                                          free((yyvsp[-9].str)); }
#line 1851 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 236 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),EQ,(yyvsp[0].expression)); }
#line 1857 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 237 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),LEQ,(yyvsp[0].expression)); }
#line 1863 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 238 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),GEQ,(yyvsp[0].expression)); }
#line 1869 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 239 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),LT,(yyvsp[0].expression)); }
#line 1875 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 240 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = new P_OneConstraint((yyvsp[-2].expression),GT,(yyvsp[0].expression)); }
#line 1881 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 241 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = new P_ThickEquality((yyvsp[-2].expression),(yyvsp[0].expression)->_2itv()); delete (yyvsp[0].expression); }
#line 1887 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 242 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = new P_OneConstraint(saw((yyvsp[-1].expression)),EQ,NULL); }
#line 1893 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 243 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = (yyvsp[-1].constraint); }
#line 1899 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 244 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.constraint) = new P_TmpSymbolDecl((yyvsp[-2].str),(yyvsp[0].expression)); 
                                                  pstruct->scopes.top().add_expr_tmp_symbol((yyvsp[-2].str)); free((yyvsp[-2].str)); }
#line 1906 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 252 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = *(yyvsp[-2].expression) + *(yyvsp[0].expression);     }
#line 1912 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 253 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = *(yyvsp[-2].expression) * *(yyvsp[0].expression);     }
#line 1918 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 254 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = *(yyvsp[-2].expression) - *(yyvsp[0].expression);     }
#line 1924 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 255 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = *(yyvsp[-2].expression) / *(yyvsp[0].expression);     }
#line 1930 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 256 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = max((yyvsp[-1].expressions));       }
#line 1936 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 257 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = min((yyvsp[-1].expressions));       }
#line 1942 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 259 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { 
                                                pstruct->scopes.push(pstruct->scopes.top());
                                                pstruct->scopes.top().add_iterator((yyvsp[-5].str));
                                              }
#line 1951 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 264 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    {
                                                (yyval.expression) = sum((yyvsp[-1].expression), (yyvsp[-8].str), (yyvsp[-6].expression), (yyvsp[-4].expression));
                                                pstruct->scopes.pop();
                                                free((yyvsp[-8].str));
                                              }
#line 1961 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 269 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = atan2((yyvsp[-3].expression),(yyvsp[-1].expression));  }
#line 1967 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 270 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = -*(yyvsp[0].expression);          }
#line 1973 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 271 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = abs  ((yyvsp[-1].expression));     }
#line 1979 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 272 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = sign ((yyvsp[-1].expression));     }
#line 1985 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 273 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = transpose((yyvsp[-1].expression)); }
#line 1991 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 274 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = sqrt ((yyvsp[-1].expression));     }
#line 1997 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 275 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = exp  ((yyvsp[-1].expression));     }
#line 2003 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 276 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = log  ((yyvsp[-1].expression));     }
#line 2009 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 277 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = cos  ((yyvsp[-1].expression));     }
#line 2015 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 278 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = sin  ((yyvsp[-1].expression));     }
#line 2021 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 279 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = tan  ((yyvsp[-1].expression));     }
#line 2027 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 280 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = acos ((yyvsp[-1].expression));     }
#line 2033 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 281 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = asin ((yyvsp[-1].expression));     }
#line 2039 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 282 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = atan ((yyvsp[-1].expression));     }
#line 2045 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 283 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = cosh ((yyvsp[-1].expression));     }
#line 2051 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 284 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = sinh ((yyvsp[-1].expression));     }
#line 2057 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 285 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = tanh ((yyvsp[-1].expression));     }
#line 2063 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 286 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = acosh((yyvsp[-1].expression));     }
#line 2069 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 287 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = asinh((yyvsp[-1].expression));     }
#line 2075 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 288 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = atanh((yyvsp[-1].expression));     }
#line 2081 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 289 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = floor((yyvsp[-1].expression));     }
#line 2087 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 290 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = ceil((yyvsp[-1].expression));      }
#line 2093 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 292 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = chi((yyvsp[-5].expression),(yyvsp[-3].expression),(yyvsp[-1].expression)); }
#line 2099 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 293 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2105 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 294 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2111 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 295 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprConstant(ball((yyvsp[-3].expression)->_2domain(),(yyvsp[-1].expression)->_2dbl(false))); }
#line 2117 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 296 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = pow((yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2123 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 297 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = expr_with_index((yyvsp[-3].expression),(yyvsp[-1].expression),false);  }
#line 2129 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 298 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = expr_with_index((yyvsp[-3].expression),(yyvsp[-1].expression),true); }
#line 2135 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 300 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = expr_with_index((yyvsp[-5].expression),(yyvsp[-3].expression),(yyvsp[-1].expression),true); }
#line 2141 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 301 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = row_vec((yyvsp[-1].expressions)); delete (yyvsp[-1].expressions); }
#line 2147 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 302 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = col_vec((yyvsp[-1].expressions)); delete (yyvsp[-1].expressions); }
#line 2153 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 303 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprVarSymbol((yyvsp[0].str)); free((yyvsp[0].str)); /* cannot happen inside a function expr */}
#line 2159 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 304 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprVarSymbol(pstruct->scopes.top().var((yyvsp[-1].itg)));   /* CHOCO variable symbols */ }
#line 2165 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 305 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprIter((yyvsp[0].str)); free((yyvsp[0].str)); }
#line 2171 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 306 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprTmpSymbol((yyvsp[0].str)); free((yyvsp[0].str)); /* not this (we do **not** build DAG with P_ExprNodes!) ---> &pstruct->scopes.top().get_expr_tmp_expr($1); */ }
#line 2177 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 307 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprCstSymbol((yyvsp[0].str)); free((yyvsp[0].str)); }
#line 2183 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 308 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = apply(pstruct->scopes.top().get_func((yyvsp[-3].str)), *(yyvsp[-1].expression)); free((yyvsp[-3].str)); }
#line 2189 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 309 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = apply(pstruct->scopes.top().get_func((yyvsp[-3].str)), *(yyvsp[-1].expressions)); free((yyvsp[-3].str)); delete (yyvsp[-1].expressions); }
#line 2195 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 311 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprConstant((yyvsp[0].real)); }
#line 2201 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 312 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprConstant(Interval::pi()); }
#line 2207 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 313 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = dbl_infinity(); }
#line 2213 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 314 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprConstant((yyvsp[0].itg)); }
#line 2219 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 315 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprConstant(*(yyvsp[0].itv)); delete (yyvsp[0].itv); }
#line 2225 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 316 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = inf((yyvsp[-1].expression)); }
#line 2231 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 317 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = mid((yyvsp[-1].expression)); }
#line 2237 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 318 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = sup((yyvsp[-1].expression)); }
#line 2243 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 319 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = diff((yyvsp[-1].expressions)); }
#line 2249 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 320 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprGenericUnaryOp((yyvsp[-3].str),*(yyvsp[-1].expression)); free((yyvsp[-3].str)); }
#line 2255 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 322 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = new P_ExprGenericBinaryOp((yyvsp[-5].str),*(yyvsp[-3].expression),*(yyvsp[-1].expression)); free((yyvsp[-5].str)); }
#line 2261 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 325 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyvsp[-2].expressions)->push_back((yyvsp[0].expression)); (yyval.expressions)=(yyvsp[-2].expressions); }
#line 2267 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 326 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expressions) = new vector<const P_ExprNode*>(); 
                                                  (yyval.expressions)->push_back((yyvsp[-2].expression)); (yyval.expressions)->push_back((yyvsp[0].expression)); }
#line 2274 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 119:
#line 330 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyvsp[-2].expressions)->push_back((yyvsp[0].expression)); (yyval.expressions)=(yyvsp[-2].expressions); }
#line 2280 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 331 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expressions) = new vector<const P_ExprNode*>(); 
                                                  (yyval.expressions)->push_back((yyvsp[-2].expression)); (yyval.expressions)->push_back((yyvsp[0].expression)); }
#line 2287 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 335 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = index_all(); }
#line 2293 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 336 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = index((yyvsp[0].expression)); }
#line 2299 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 337 "/home/russt/tmp/ibex-lib/src/parser/parser.yc" /* yacc.c:1646  */
    { (yyval.expression) = index_range((yyvsp[-2].expression),(yyvsp[0].expression)); }
#line 2305 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
    break;


#line 2309 "/home/russt/tmp/ibex-lib/build/src/parser/parser.tab.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
