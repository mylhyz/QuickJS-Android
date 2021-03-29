#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_viper_android_quickjs_engine_QuickJS_build(JNIEnv *env, jclass clazz) {
    return env->NewStringUTF("v2021-03-27");
}