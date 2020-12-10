////////////////////////////////////////////////////////////////////////////////
void val1(){     
     if (val == 1 && stat == true ) {
       kekiri = false;
       l1parkir = true;
       stat = false;
       if (l1parkir == true && stat == false )
       naik();
       delay(1190);
       keatas = false;
       berhenti = true;
       stat = false;
     }
     if (berhenti == true && stat == false && l1parkir == true) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
      if (push == true && stat == false && l1parkir == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
      if (digitalRead(endstop_maju) == 1 && berhenti2 == true && stat == false && l1parkir == true){
        Stop_x();
        delay(1000);
        keatas = true;
        berhenti2 = false;
     }
     if (keatas == true && stat == false && l1parkir == true){
        naik();
        delay(2900);
        Stop_y();
        keatas = false;
        pull = true;
     }
  if (pull == true && stat == false && l1parkir == true){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && stat == false && l1parkir == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l1parkir == true) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && stat == false && l1parkir == true){
        Stop_y();
        kebawahfull = false;
        //stat = true;
        ulang = false;
        kekanan = true;
     }
   if (kekanan == true && stat == false && l1parkir == true){
       tengahtoin();
       kekanan = false;
       take = true;
      // siap = true;
      // l1parkir = false;
     }
    if (digitalRead(LSin) == 1 && take == true && stat == false && l1parkir == true) {
      Stop_z();
     // kekanan = false;
     l1parkir = false;
      take = false;
      siap = true;
   }
 ///////////////////////////////////////////////////////////////    
  if (val == 1 && stat == false && siap == true && l1parkir == false){
        //l1parkir = false;
        l1parkirsiap = true;
        intotengah();
        delay(1000);
        naik();
        delay(2450);
        berhenti = true;
        siap = false;
     }
  if (berhenti == true && stat == false && l1parkirsiap == true ) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
  if (push == true && stat == false && l1parkirsiap == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
  if (digitalRead(endstop_maju) == 1 && stat == false && berhenti2 == true && l1parkirsiap == true ){
        Stop_x();
        delay(1000);
        kebawah = true;
        berhenti2 = false;
     }
  if (kebawah == true && stat == false && l1parkirsiap == true ){
        turun();
        delay(1000);
        Stop_y();
        kebawah = false;
        pull = true;
     }
  if (pull == true && stat == false && l1parkirsiap == true ){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && l1parkirsiap == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l1parkirsiap == true ) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && l1parkirsiap == true ){
        Stop_y();
        kebawahfull = false;
        stat = true;
        ulang = false;
        l1parkirsiap = false;
        kekanan = false;
        kekiri = false;
     } 
  }
