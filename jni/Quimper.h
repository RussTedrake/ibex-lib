/* DO NOT EDIT THIS FILE - it is machine generated */

#include <jni.h>

#ifndef __Quimper__
#define __Quimper__

#ifdef __cplusplus
extern "C"
{
#endif

JNIEXPORT jboolean JNICALL Java_Quimper_contract (JNIEnv *env, jobject, jstring);
JNIEXPORT void JNICALL Java_Quimper_set_1domain (JNIEnv *env, jobject, jstring, jdouble, jdouble);
JNIEXPORT void JNICALL Java_Quimper_set_1var_1domain (JNIEnv *env, jobject, jint, jdouble, jdouble);
JNIEXPORT void JNICALL Java_Quimper_set_1syb_1domain (JNIEnv *env, jobject, jint, jdouble, jdouble);
JNIEXPORT jdouble JNICALL Java_Quimper_get_1lb (JNIEnv *env, jobject, jstring);
JNIEXPORT jdouble JNICALL Java_Quimper_get_1ub (JNIEnv *env, jobject, jstring);
JNIEXPORT jdouble JNICALL Java_Quimper_get_1var_1lb (JNIEnv *env, jobject, jint);
JNIEXPORT jdouble JNICALL Java_Quimper_get_1var_1ub (JNIEnv *env, jobject, jint);
JNIEXPORT jdouble JNICALL Java_Quimper_get_1syb_1lb (JNIEnv *env, jobject, jint);
JNIEXPORT jdouble JNICALL Java_Quimper_get_1syb_1ub (JNIEnv *env, jobject, jint);
JNIEXPORT void JNICALL Java_Quimper_load (JNIEnv *env, jobject, jstring);
JNIEXPORT void JNICALL Java_Quimper_release (JNIEnv *env, jobject);

#ifdef __cplusplus
}
#endif

#endif /* __Quimper__ */