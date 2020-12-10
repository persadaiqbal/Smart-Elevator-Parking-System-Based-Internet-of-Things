boolean state_in = 0;
boolean state_out = 0;

void gerbang_in(){
    if (digitalRead(5) == 0) {
    while (digitalRead(5) == 0) {
      delay(1);
    }
    state_in = !state_in;
  }
    if (state_in == 1) {
    servo_in.write(80);
    Serial.println("servo 90 derajat");
  }
  if (digitalRead(4) == 0){
     servo_in.write(0); 
    Serial.println("servo 0 derajat");
     counter--;
    state_in = 0;
    if(counter <= 00){
      counter = 00;
    }
  if(counter >= 03){
      counter = 03;
    }
    Serial.println(counter);
    EEPROM.write(102,counter); 
    mp3_play (1);
    delay (1200);
  }
}
void gerbang_out(){
    if (digitalRead(6) == 0) {
    while (digitalRead(6) == 0) {
      delay(1);
    }
    state_out = !state_out;
  }
    if (state_out == 1) {
    servo_out.write(80);
    Serial.println("servo 90 derajat"); 
    counter++;
    state_out = 0;
    if(counter <= 00){
      counter = 00;
    }
  if(counter >= 03){
      counter = 03;
    }
    Serial.println(counter);
    EEPROM.write(102,counter);
  } 
  if (digitalRead(7) == 0){
    servo_out.write(0); 
    Serial.println("servo 0 derajat"); 
    counter++;
    state_out = 0;
    if(counter <= 00){
      counter = 00;
    }
  if(counter >= 03){
      counter = 03;
    }
    Serial.println(counter);
    EEPROM.write(102,counter);
    mp3_play (2);
    delay(1200);
  }
}
