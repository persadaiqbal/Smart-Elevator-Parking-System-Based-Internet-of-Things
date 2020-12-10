

#include "FirebaseESP8266.h"
#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>
SoftwareSerial serial(D1,D2);
int senbik1 = D3;
int senbik2 = D4;
int senbik3 = D7;


const char* ssid = "Kriskh";
const char* password = "03031966";

FirebaseData firebaseData;
FirebaseData firebaseData1;
//firebaseData1.dataType = "string" ;

void setup() {
  Serial.begin(9600);
  serial.begin(9600);
  pinMode(senbik1,INPUT);
  pinMode(senbik2,INPUT);
  pinMode(senbik3,INPUT);
  
  konekWifi();
  Firebase.begin("https://sistem-parkir-9f7d9.firebaseio.com/", "1VSO58f1irBbK1dTRvNEucwMFi4ey6qmm7Sx9hvY");
  //Firebase.begin("firebase host", "firebase auth database");
}

void konekWifi() {
  WiFi.begin(ssid, password);
  //memulai menghubungkan ke wifi router
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print("."); //status saat mengkoneksikan
  }
  Serial.println("Sukses terkoneksi wifi!");
  Serial.println("IP Address:"); //alamat ip lokal
  Serial.println(WiFi.localIP());
}

void loop() {
String kosong = "Kosong";
String penuh = "Terisi";      

  if (Firebase.getInt(firebaseData, "lantai1")) { //misal database diberikan nama relay1
    if  (firebaseData.dataType() == "int") 
    {
      int FBStatus1 = firebaseData.intData();
     // if (FBStatus1 = '\n') {
      if (FBStatus1 == 1) {                                                         
     // Serial.println("Parkir1 Aktif");                         
      Serial.println(FBStatus1);
      serial.println(FBStatus1);
      }
      if (FBStatus1 == 2) {                                                  
     // Serial.println("Parkir2 Aktif"); 
      Serial.println(FBStatus1);
      serial.println(FBStatus1);                                              
      }
       
       if (FBStatus1 == 3) {                                                  
     // Serial.println("Parkir3 Aktif"); 
     Serial.println(FBStatus1);
      serial.println(FBStatus1);                                              
        }
          
      if (FBStatus1 == 4) {                                                  
     // Serial.println("Parkir1 Nonaktif"); 
      Serial.println(FBStatus1);
        serial.println(FBStatus1);                                              
        }
          
      if (FBStatus1 == 5) {                                                  
     // Serial.println("Parkir2 Nonaktif"); 
      Serial.println(FBStatus1);
      serial.println(FBStatus1);                                              
       }
          
      if (FBStatus1 == 6) {                                                  
     // Serial.println("Parkir3 nonaktif"); 
      Serial.println(FBStatus1);
      serial.println(FBStatus1);                                              
       }
      if (FBStatus1 == 0) {                                                  
     // Serial.println("Parkir3 Aktif"); 
      Serial.println(FBStatus1);
      serial.println(FBStatus1);                                              
      }  
   // Serial.println(FBStatus1);
    }
  }
  if (digitalRead(senbik1) == 1) { //misal database diberikan nama relay1
    //if  (firebaseData1.dataType() == "string") {
        Firebase.setString(firebaseData1, "bilik1",kosong);
     // }
    }
   if (digitalRead(senbik1) == 0) { //misal database diberikan nama relay1
   // firebaseData1.dataType() == "string" 
        Firebase.setString(firebaseData1, "bilik1",penuh);
    
    }
    if (digitalRead(senbik2) == 1) { //misal database diberikan nama relay1
    //if  (firebaseData1.dataType() == "string") {
        Firebase.setString(firebaseData1, "bilik2",kosong);
     // }
    }
   if (digitalRead(senbik2) == 0) { //misal database diberikan nama relay1
   // firebaseData1.dataType() == "string" 
        Firebase.setString(firebaseData1, "bilik2",penuh);
    
    }
    if (digitalRead(senbik3) == 1) { //misal database diberikan nama relay1
    //if  (firebaseData1.dataType() == "string") {
        Firebase.setString(firebaseData1, "bilik3",kosong);
     // }
    }
   if (digitalRead(senbik3) == 0) { //misal database diberikan nama relay1
   // firebaseData1.dataType() == "string" 
        Firebase.setString(firebaseData1, "bilik3",penuh);
    
    }
}
