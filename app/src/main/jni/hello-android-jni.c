#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_google_sample_helloandroidjni_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {

    return (*env)->NewStringUTF(env, "Hello From Jni");
}