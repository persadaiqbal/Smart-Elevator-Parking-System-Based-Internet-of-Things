///////////////////////////////////////////////////////////////////////////////
void val3(){    
  if (val == 3 && stat == true ) {
       l3parkir = true;
       stat = false;
       if (l3parkir == true && stat == false )
       naik();
       delay(23200);
       keatas = false;
       berhenti = true;
       stat = false;
     }
     if (berhenti == true && stat == false && l3parkir == true) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
      if (push == true && stat == false && l3parkir == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
      if (digitalRead(endstop_maju) == 1 && berhenti2 == true && stat == false && l3parkir == true){
        Stop_x();
        delay(1000);
        keatas = true;
        berhenti2 = false;
     }
     if (keatas == true && stat == false && l3parkir == true){
        naik();
        delay(3200);
        Stop_y();
        keatas = false;
        pull = true;
     }
  if (pull == true && stat == false && l3parkir == true){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && stat == false && l3parkir == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l3parkir == true) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && stat == false && l3parkir == true){
        Stop_y();
        kebawahfull = false;
        //stat = true;
        ulang = false;
        kekanan = true;
     }
   if (kekanan == true && stat == false && l3parkir == true){
       tengahtoin();
       kekanan = false;
       take = true;
      // siap = true;
      // l1parkir = false;
     }
    if (digitalRead(LSin) == 1 && take == true && stat == false && l3parkir == true) {
      Stop_z();
     // kekanan = false;
      //l3parkir = false;
      take = false;
      siap = true;
   }
 ///////////////////////////////////////////////////////////////    
  if (val == 3 && stat == false && siap == true && l3parkir == true){
        l3parkir = false;
        l3parkirsiap = true;
        intotengah();
        delay(1000);
        naik();
        delay(24300);
        berhenti = true;
        siap = false;
     }
  if (berhenti == true && stat == false && l3parkirsiap == true ) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
  if (push == true && stat == false && l3parkirsiap == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
  if (digitalRead(endstop_maju) == 1 && stat == false && berhenti2 == true && l3parkirsiap == true ){
        Stop_x();
        delay(1000);
        kebawah = true;
        berhenti2 = false;
     }
  if (kebawah == true && stat == false && l3parkirsiap == true ){
        turun();
        delay(2000);
        Stop_y();
        kebawah = false;
        pull = true;
     }
  if (pull == true && stat == false && l3parkirsiap == true ){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && l3parkirsiap == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l3parkirsiap == true ) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && l3parkirsiap == true ){
        Stop_y();
        kebawahfull = false;
        stat = true;
        ulang = false;
        l3parkirsiap = false;
        kekanan = false;
        kekiri = false;
     } 
  }
