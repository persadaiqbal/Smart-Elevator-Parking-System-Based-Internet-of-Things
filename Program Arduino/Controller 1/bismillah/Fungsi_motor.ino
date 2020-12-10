void naik(){
  digitalWrite(A1A,LOW);
  digitalWrite(A1B,HIGH);
    if (digitalRead(endstop_naik) == 1){
    digitalWrite(A1A,LOW);
    digitalWrite(A1B,LOW);
   }
}
void turun(){
  digitalWrite(A1A,HIGH);
  digitalWrite(A1B,LOW);
    if (digitalRead(endstop_turun) == 1){
    digitalWrite(A1A,LOW);
    digitalWrite(A1B,LOW);
}
}
void maju(){
  digitalWrite(B1A,LOW);
  digitalWrite(B1B,HIGH);
  if (digitalRead(endstop_maju) == 1){
    digitalWrite(B1A,LOW);
    digitalWrite(B1B,LOW);
  }
}
void mundur(){
  digitalWrite(B1A,HIGH);
  digitalWrite(B1B,LOW);
  if (digitalRead(endstop_mundur) == 1){
    digitalWrite(B1A,LOW);
    digitalWrite(B1B,LOW);
  }
} 
void tengahtoin(){
  digitalWrite(C1A,HIGH);
  digitalWrite(C1B,LOW);
  //delay(680);  
  if (digitalRead(LSin) == 1){
    digitalWrite(C1A,LOW);
    digitalWrite(C1B,LOW);
  }
}
void intotengah(){
  digitalWrite(C1A,LOW);
  digitalWrite(C1B,HIGH);
  delay(610);
    digitalWrite(C1A,LOW);
    digitalWrite(C1B,LOW);
}
void tengahtoout(){
  digitalWrite(C1A,LOW);
  digitalWrite(C1B,HIGH);  
 if (digitalRead(LSout) == 1){
    digitalWrite(C1A,LOW);
    digitalWrite(C1B,LOW);
  }
}
void outtotengah(){
  digitalWrite(C1A,HIGH);
  digitalWrite(C1B,LOW);
  delay(612);
    digitalWrite(C1A,LOW);
    digitalWrite(C1B,LOW);
}
