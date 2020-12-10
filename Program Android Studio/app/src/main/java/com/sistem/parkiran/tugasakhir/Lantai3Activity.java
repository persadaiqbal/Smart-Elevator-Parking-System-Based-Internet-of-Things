package com.sistem.parkiran.tugasakhir;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.DialogInterface;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;

import android.widget.Toast;

public class Lantai3Activity extends AppCompatActivity implements View.OnClickListener {
    private Button parkir3, keluar3;
    DatabaseReference ref4, ref5;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_lantai3);
        parkir3 = findViewById(R.id.parkir3);
        keluar3 = findViewById(R.id.keluar3);
        parkir3.setOnClickListener(this);
        keluar3.setOnClickListener(this);

        parkir3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                FirebaseDatabase database1 = FirebaseDatabase.getInstance();
                DatabaseReference ref4 = database1.getReference("lantai1");//LED_STATUS is Firebase database LED_STATUS
                ref4.setValue(3);
                try {
                    Thread.sleep(3000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                ref4.setValue(0);
                AlertDialog.Builder dialog1 = new AlertDialog.Builder(Lantai3Activity.this);
                dialog1.setTitle("Peringatan");
                dialog1.setMessage("Pastikan Kendaraan Anda Telah Memasuki Parkiran");
                dialog1.setPositiveButton("Parkir", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        FirebaseDatabase database1 = FirebaseDatabase.getInstance();
                        DatabaseReference ref4 = database1.getReference("lantai1");//LED_STATUS is Firebase database LED_STATUS
                        ref4.setValue(3);
                        try {
                            Thread.sleep(3000);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                        ref4.setValue(0);
                        Toast.makeText(Lantai3Activity.this, "Mobil Terparkir", Toast.LENGTH_SHORT).show();
                    }
                });
                AlertDialog parkir3 = dialog1.create();
                parkir3.show();
            }
        });
        keluar3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                FirebaseDatabase database11 = FirebaseDatabase.getInstance();
                DatabaseReference ref5 = database11.getReference("lantai1");//LED_STATUS is Firebase database LED_STATUS
                ref5.setValue(6);
                try {
                    Thread.sleep(3000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                ref5.setValue(0);
                Toast.makeText(Lantai3Activity.this, "Mobil Keluar", Toast.LENGTH_SHORT).show();
            }
        });
    }

    @Override
    public void onClick(View v) {

    }
}


