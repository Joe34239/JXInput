/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ivan_xinput_natives_XInputNatives14 */

#ifndef _Included_com_ivan_xinput_natives_XInputNatives14
#define _Included_com_ivan_xinput_natives_XInputNatives14
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ivan_xinput_natives_XInputNatives14
 * Method:    setEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_ivan_xinput_natives_XInputNatives14_setEnabled
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_ivan_xinput_natives_XInputNatives14
 * Method:    getCapabilities
 * Signature: (IILjava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_ivan_xinput_natives_XInputNatives14_getCapabilities
  (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     com_ivan_xinput_natives_XInputNatives14
 * Method:    getBatteryInformation
 * Signature: (IILjava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_ivan_xinput_natives_XInputNatives14_getBatteryInformation
  (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     com_ivan_xinput_natives_XInputNatives14
 * Method:    getKeystroke
 * Signature: (ILjava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_ivan_xinput_natives_XInputNatives14_getKeystroke
  (JNIEnv *, jclass, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif
