/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_axiak_runutils_SpawnedProcess */

#ifndef _Included_net_axiak_runutils_SpawnedProcess
#define _Included_net_axiak_runutils_SpawnedProcess
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_axiak_runutils_SpawnedProcess
 * Method:    execProcess
 * Signature: ([Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;)I
 */
JNIEXPORT jint JNICALL Java_net_axiak_runutils_SpawnedProcess_execProcess
  (JNIEnv *, jobject, jobjectArray, jobjectArray, jstring, jobject, jobject, jobject);

/*
 * Class:     net_axiak_runutils_SpawnedProcess
 * Method:    waitForProcess
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_axiak_runutils_SpawnedProcess_waitForProcess
  (JNIEnv *, jobject, jint);

/*
 * Class:     net_axiak_runutils_SpawnedProcess
 * Method:    killProcess
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_axiak_runutils_SpawnedProcess_killProcess
  (JNIEnv *, jobject, jint);


#ifdef __cplusplus
}
#endif
#endif
