package com.viper.android.quickjs.playground;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;
import android.widget.Toast;

import com.viper.android.quickjs.engine.QuickJS;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        QuickJS.loadIfNeed();

        TextView tv = findViewById(R.id.build_number);
        tv.setText(String.format("QuickJS Engine : %s", QuickJS.version()));

        String scripts = "";
        int code = QuickJS.eval(scripts);
        Toast.makeText(this, "" + code, Toast.LENGTH_SHORT).show();
    }
}