package com.sistem.parkiran.tugasakhir;

import androidx.annotation.RequiresApi;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;

public class ParkirActivity extends AppCompatActivity implements View.OnClickListener{
    private TextView l1,l2,l3;
    DatabaseReference dref1,dref2,dref3;
    private Button btn1, btn2, btn3;
    String stat1,stat2,stat3;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_parkir);
        btn1 = findViewById(R.id.button);
        btn2 = findViewById(R.id.button2);
        btn3 = findViewById(R.id.button3);
        l1 = findViewById(R.id.bilik1);
        l2 = findViewById(R.id.bilik2);
        l3 = findViewById(R.id.bilik3);
        dref1= FirebaseDatabase.getInstance().getReference();
        dref2= FirebaseDatabase.getInstance().getReference();
        dref3= FirebaseDatabase.getInstance().getReference();
        btn1.setOnClickListener(this);
        btn2.setOnClickListener(this);
        btn3.setOnClickListener(this);
        dref1.addValueEventListener(new ValueEventListener() {
            @RequiresApi(api = Build.VERSION_CODES.JELLY_BEAN)
            @Override
            public void onDataChange(DataSnapshot dataSnapshot) {
                stat1 = dataSnapshot.child("bilik1").getValue().toString();
                l1.setText(stat1);
            }
            @Override
            public void onCancelled(DatabaseError databaseError) {
            }
        });
        dref2.addValueEventListener(new ValueEventListener() {
            @Override
            public void onDataChange(DataSnapshot dataSnapshot) {
                stat2=dataSnapshot.child("bilik2").getValue().toString();
                l2.setText(stat2);
            }
            @Override
            public void onCancelled(DatabaseError databaseError) {
            }
        });
        dref3.addValueEventListener(new ValueEventListener() {
            @Override
            public void onDataChange(DataSnapshot dataSnapshot) {
                stat3=dataSnapshot.child("bilik3").getValue().toString();
                l3.setText(stat3);

            }
            @Override
            public void onCancelled(DatabaseError databaseError) {
            }
        });
    }
    public void onClick(View v) {
        switch (v.getId()) {
            case R.id.button:
                /*
                Intent untuk memulai activity baru
                 */
                Intent moveIntent1 = new Intent(ParkirActivity.this, Lantai1Activity.class);
                startActivity(moveIntent1);
                break;
            case R.id.button2:
                /*
                Intent untuk mengirimkan data ke activity lain
                 */
                Intent moveIntent2 = new Intent(ParkirActivity.this, Lantai2Activity.class);
                startActivity(moveIntent2);
                break;
            case R.id.button3:
                /*
                Intent untuk mengirimkan object ke activity lain, perlu diingat bahwa object Person adalah parcelable
                 */
                Intent moveIntent3 = new Intent(ParkirActivity.this, Lantai3Activity.class);
                startActivity(moveIntent3);
                break;

        }
    }
}
