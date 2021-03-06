/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mediatek_elian_ElianNative */

#ifndef _Included_com_mediatek_elian_ElianNative
#define _Included_com_mediatek_elian_ElianNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mediatek_elian_ElianNative
 * Method:    GetProtoVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_elian_ElianNative_GetProtoVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_mediatek_elian_ElianNative
 * Method:    GetLibVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_elian_ElianNative_GetLibVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_mediatek_elian_ElianNative
 * Method:    InitSmartConnection
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_elian_ElianNative_InitSmartConnection
  (JNIEnv *, jobject, jstring, jint, jint);

/*
 * Class:     com_mediatek_elian_ElianNative
 * Method:    StartSmartConnection
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;B)I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_elian_ElianNative_StartSmartConnection
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     com_mediatek_elian_ElianNative
 * Method:    StopSmartConnection
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_elian_ElianNative_StopSmartConnection
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
