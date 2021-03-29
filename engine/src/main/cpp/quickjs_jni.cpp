#include <jni.h>

#include "quickjs.h"

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
JNIEXPORT jlong JNICALL
Java_com_viper_android_quickjs_engine_QuickJS_eval(JNIEnv *env, jclass clazz, jstring jscripts) {
    JSRuntime *rt = JS_NewRuntime();
    if (rt == nullptr) {
        fprintf(stderr, "JS_NewRuntime failure");
        return -1;
    }
    JSContext *ctx = JS_NewContext(rt);
    if (ctx == nullptr) {
        return -2;
    }
    const char *scripts = env->GetStringUTFChars(jscripts, JNI_FALSE);
    jsize scripts_len = env->GetStringUTFLength(jscripts);
    JSValue ret = JS_Eval(ctx, (char *) scripts, scripts_len, "index.js",
                          JS_EVAL_TYPE_GLOBAL);
    env->ReleaseStringUTFChars(jscripts, scripts);
    JS_FreeContext(ctx);
    JS_FreeRuntime(rt);
    return static_cast<jlong>(JS_VALUE_GET_INT(ret));
}