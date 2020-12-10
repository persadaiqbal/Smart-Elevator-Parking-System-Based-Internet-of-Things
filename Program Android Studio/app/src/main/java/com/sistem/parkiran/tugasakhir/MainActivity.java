package com.sistem.parkiran.tugasakhir;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import com.google.firebase.database.DatabaseReference;

public class MainActivity extends AppCompatActivity {
   private Button yes,yes1,yes2;
   DatabaseReference dref1,dref2,dref3;
   String stat1,stat2,stat3;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        yes = findViewById(R.id.yes);
        yes1 = findViewById(R.id.yes1);
        yes2 = findViewById(R.id.yes2);
        yes.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view) {
                Intent moveIntent = new Intent(MainActivity.this, ParkirActivity.class);
                startActivity(moveIntent);
            }
        });
    }
}
