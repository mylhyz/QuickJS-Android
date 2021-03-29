package com.viper.android.quickjs.engine;

public class QuickJS {

    private static boolean isQuickJSAndroidLoaded = false;

    public static void loadIfNeed() {
        if (isQuickJSAndroidLoaded) {
            return;
        }
        isQuickJSAndroidLoaded = true;
        System.loadLibrary("quickjs_android");
    }

    public static native String version();

    public static native long eval(String scripts);
}
