/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intrigus_cocoja_ObjcRuntime */

#ifndef _Included_com_intrigus_cocoja_ObjcRuntime
#define _Included_com_intrigus_cocoja_ObjcRuntime
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intrigus_cocoja_ObjcRuntime
 * Method:    _objc_getClass
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_intrigus_cocoja_ObjcRuntime__1objc_1getClass
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_intrigus_cocoja_ObjcRuntime
 * Method:    _objc_getMetaClass
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_intrigus_cocoja_ObjcRuntime__1objc_1getMetaClass
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_intrigus_cocoja_ObjcRuntime
 * Method:    _objc_lookUpClass
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_intrigus_cocoja_ObjcRuntime__1objc_1lookUpClass
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_intrigus_cocoja_ObjcRuntime
 * Method:    _objc_msgSend
 * Signature: (JJ[Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_com_intrigus_cocoja_ObjcRuntime__1objc_1msgSend
  (JNIEnv *, jclass, jlong, jlong, jobjectArray);

/*
 * Class:     com_intrigus_cocoja_ObjcRuntime
 * Method:    _sel_getName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intrigus_cocoja_ObjcRuntime__1sel_1getName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_intrigus_cocoja_ObjcRuntime
 * Method:    _sel_getUid
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_intrigus_cocoja_ObjcRuntime__1sel_1getUid
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
