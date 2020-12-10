#include <Adafruit_GFX.h>    
#include <Adafruit_ST7735.h> 
#include <Wire.h>
#include "Sodaq_DS3231.h"
#include  <SPI.h>
#include <Servo.h>
#include <EEPROM.h>
#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>

#define TFT_DC 9              
#define TFT_CS 10             
#define TFT_RST 8             
//#define TFT_MISO 12           
#define TFT_MOSI 11           
#define TFT_SCLK 13   

Servo servo_in;
Servo servo_out;
SoftwareSerial mySerial(2, 3);

//Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST);

char timeChar[100];
char dateChar[50];
char dateChar1[50];
char dateChar2[50];

uint32_t old_ts;

String dateString;
String dateString1;
String dateString2;
int minuteNow=0;
int minutePrevious=0;

int counter = EEPROM.read(102);

void setup(){
  
  Serial.begin(9600);
  mySerial.begin (9600);
  mp3_set_serial (mySerial);
  delay(10);
  mp3_set_volume (45);
  pinMode (4, INPUT);
  pinMode (5, INPUT);
  pinMode (6, INPUT);
  pinMode (7, INPUT);
  servo_in.attach(A2);
  servo_out.attach(A3);

  //tft.begin();
  tft.initR(INITR_BLACKTAB);                       
  tft.setRotation(3);            
  tft.fillScreen(ST7735_BLACK);

  Wire.begin();
  rtc.begin();

  printText("LOT PARKIR", ST7735_GREEN,22,52,2);
  //printText("IN", ST7735_RED,40,65,1);
  //printText("OUT", ST7735_RED,90,65,1);
  printText("SELAMAT DATANG", ST7735_RED,40,102,1);
  printText("PARKIRAN TINGKAT PINTAR", ST7735_RED,10,112,1);
 
  //setRTCTime();
}
 
void loop()
{
  dateString2 = counter;
  printwaktu_lcd();
  gerbang_in();
  gerbang_out();
  dateString2.toCharArray(dateChar2,50);
  printText(dateChar2, ST7735_YELLOW,70,70,3);
  //tft.fillScreen(ST7735_BLACK);
    //delay(1000);
}
