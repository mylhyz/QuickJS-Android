#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_viper_android_quickjs_engine_QuickJS_version(JNIEnv *env, jclass clazz) {
#ifdef CONFIG_VERSION
    return env->NewStringUTF(CONFIG_VERSION);
#else
    return env->NewStringUTF("0");
#endif
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_viper_android_quickjs_engine_QuickJS_eval(JNIEnv *env, jclass clazz, jstring scripts) {
    return 0;
}