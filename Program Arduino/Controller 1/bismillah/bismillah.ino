#include <SoftwareSerial.h>
SoftwareSerial serial (2,3);
String data; 
char c;
int val;
//pin motor lift
const int A1A = 10;
const int A1B = 9;
const int B1A = 8;
const int B1B = 7;
const int C1A = 6;
const int C1B = 5;
//pin pengaman axis lift
//int LS1 = 11;
//int steng = 11;
int sout = 13;
int LSin = A5;
int LSout = A4;
int endstop_maju = A0;
int endstop_mundur = A1;
int endstop_naik = A2;
int endstop_turun = A3;
int stat = true; // status lift ready
int berhenti;
int l1parkir;
int l1parkirsiap = false;
int l2parkir;
int l2parkirsiap = false;
int l3parkir;
int l3parkirsiap = false;
int l1ambil;
int l1ambilsiap = false;
int l2ambil;
int l2ambilsiap = false;
int l3ambil;
int l3ambilsiap = false;
int berhenti2;
int push;
int pull;
int kebawah;
int kebawahfull;
int siap;
int rede;
int masuk;
int keluar;
int ulang; 
int keatas; 
int kekanan; 
int kekiri;
int take;
int siap1;
int siap2;
int siap3;
void setup() {
  Serial.begin(9600);
  serial.begin(9600);

  pinMode(A1A,OUTPUT);
  pinMode(A1B,OUTPUT); 
  pinMode(B1A,OUTPUT);
  pinMode(B1B,OUTPUT);
  pinMode(C1A,OUTPUT);
  pinMode(C1B,OUTPUT);
  
//  pinMode(LS1,INPUT);
//  pinMode(steng,INPUT);
  pinMode(sout,INPUT);  
  pinMode(LSin,INPUT); 
  pinMode(LSout,INPUT); 
  pinMode(endstop_maju,INPUT);
  pinMode(endstop_mundur,INPUT);
  pinMode(endstop_naik,INPUT);
  pinMode(endstop_turun,INPUT);
  //pinMode(endstop_kanan,INPUT);
 // pinMode(endstop_kiri,INPUT);
}

void loop() {
  int state1 = digitalRead(endstop_maju);
  int state2 = digitalRead(endstop_mundur);
  int state3 = digitalRead(endstop_naik);
  int state4 = digitalRead(endstop_turun);
  //int state5 = digitalRead(LSin);
  int state6 = digitalRead(LSout);
  //int state7 = digitalRead(endstop_kanan);
  //int state8 = digitalRead(endstop_kiri);
  //int state7 = digitalRead(LS1);
  //int state8 = digitalRead(steng);
  int state9 = digitalRead(sout);
  //Serial.println(state1);
  //Serial.println(state2);
  //Serial.println(state3);
  //Serial.println(state4);
  //Serial.println(state5);
  //Serial.println(state6);
  //Serial.println(state7);
  //  Serial.println(state8);
 Serial.println(state9);
  //Serial.println("");
 //delay(1000);
////////////////////////////////////////////////////////////////////////////////
  //bilik1_taro();
  
  //turun();
  // maju();
  //mundur();
  //kanan();
  //in();
  //intotengah();
  //naik();
  //tengahtoin();
  while (serial.available() > 0){
   // delay(10);
    c = serial.read();
    data +=c;
  }
      if (data.length()>0) {   
      Serial.println(data);
      val=data.toInt();
      }
   val1();
   val2();
   val3();
   val4();
   val5();
   val6();
  data="";  
  }
