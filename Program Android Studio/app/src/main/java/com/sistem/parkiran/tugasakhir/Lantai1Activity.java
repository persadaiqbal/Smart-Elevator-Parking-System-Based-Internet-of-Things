package com.sistem.parkiran.tugasakhir;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.DialogInterface;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;
import android.os.Bundle;
import android.widget.Toast;

public class Lantai1Activity extends AppCompatActivity implements View.OnClickListener {
    private Button parkir1, keluar1;
    DatabaseReference ref4, ref5;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_lantai1);
        parkir1 = findViewById(R.id.parkir1);
        keluar1 = findViewById(R.id.keluar1);
        parkir1.setOnClickListener(this);
        keluar1.setOnClickListener(this);

        parkir1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                FirebaseDatabase database1 = FirebaseDatabase.getInstance();
                DatabaseReference ref4 = database1.getReference("lantai1");//LED_STATUS is Firebase database LED_STATUS
                ref4.setValue(1);
                try {
                    Thread.sleep(3000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                ref4.setValue(0);
                AlertDialog.Builder dialog1 = new AlertDialog.Builder(Lantai1Activity.this);
                dialog1.setTitle("Peringatan");
                dialog1.setMessage("Pastikan Kendaraan Anda Telah Memasuki Parkiran");
                dialog1.setPositiveButton("Parkir", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        FirebaseDatabase database1 = FirebaseDatabase.getInstance();
                        DatabaseReference ref4 = database1.getReference("lantai1");//LED_STATUS is Firebase database LED_STATUS
                        ref4.setValue(1);
                        try {
                            Thread.sleep(3000);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                        ref4.setValue(0);
                        Toast.makeText(Lantai1Activity.this, "Mobil Terparkir", Toast.LENGTH_SHORT).show();
                    }
                });
                AlertDialog parkir1 = dialog1.create();
                parkir1.show();
            }
        });
        keluar1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                FirebaseDatabase database11 = FirebaseDatabase.getInstance();
                DatabaseReference ref5 = database11.getReference("lantai1");//LED_STATUS is Firebase database LED_STATUS
                ref5.setValue(4);
                try {
                    Thread.sleep(3000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                ref5.setValue(0);
                Toast.makeText(Lantai1Activity.this, "Mobil Keluar", Toast.LENGTH_SHORT).show();
            }
        });
    }

    @Override
    public void onClick(View v) {

    }
}


