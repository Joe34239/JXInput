/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ivan_xinput_natives_XInputNatives */

#ifndef _Included_com_ivan_xinput_natives_XInputNatives
#define _Included_com_ivan_xinput_natives_XInputNatives
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ivan_xinput_natives_XInputNatives
 * Method:    pollDevice
 * Signature: (ILjava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_ivan_xinput_natives_XInputNatives_pollDevice
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_ivan_xinput_natives_XInputNatives
 * Method:    setVibration
 * Signature: (ISS)I
 */
JNIEXPORT jint JNICALL Java_com_ivan_xinput_natives_XInputNatives_setVibration
  (JNIEnv *, jclass, jint, jshort, jshort);

#ifdef __cplusplus
}
#endif
#endif
