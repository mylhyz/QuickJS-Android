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
}
