package com.viper.android.quickjs.playground;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

import com.viper.android.quickjs.engine.QuickJS;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        QuickJS.loadIfNeed();
    }
}