////////////////////////////////////////////////////////////////////////////////
void val2(){     
     if (val == 2 && stat == true ) {
       l2parkir = true;
       stat = false;
       if (l2parkir == true && stat == false )
       naik();
       delay(12000);
       keatas = false;
       berhenti = true;
       stat = false;
     }
     if (berhenti == true && stat == false && l2parkir == true) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
      if (push == true && stat == false && l2parkir == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
      if (digitalRead(endstop_maju) == 1 && berhenti2 == true && stat == false && l2parkir == true){
        Stop_x();
        delay(1000);
        keatas = true;
        berhenti2 = false;
     }
     if (keatas == true && stat == false && l2parkir == true){
        naik();
        delay(3400);
        Stop_y();
        keatas = false;
        pull = true;
     }
  if (pull == true && stat == false && l2parkir == true){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && stat == false && l2parkir == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l2parkir == true) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && stat == false && l2parkir == true){
        Stop_y();
        kebawahfull = false;
        //stat = true;
        ulang = false;
        kekanan = true;
     }
   if (kekanan == true && stat == false && l2parkir == true){
       tengahtoin();
       kekanan = false;
       take = true;
      // siap = true;
      // l1parkir = false;
     }
    if (digitalRead(LSin) == 1 && take == true && stat == false && l2parkir == true) {
      Stop_z();
     // kekanan = false;
     // l2parkir = false;
      take = false;
      siap = true;
   }
 ///////////////////////////////////////////////////////////////    
  if (val == 2 && stat == false && siap == true && l2parkir == true){
        l2parkir = false;
        l2parkirsiap = true;
        intotengah();
        delay(1000);
        naik();
        delay(13300);
        berhenti = true;
        siap = false;
     }
  if (berhenti == true && stat == false && l2parkirsiap == true ) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
  if (push == true && stat == false && l2parkirsiap == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
  if (digitalRead(endstop_maju) == 1 && stat == false && berhenti2 == true && l2parkirsiap == true ){
        Stop_x();
        delay(1000);
        kebawah = true;
        berhenti2 = false;
     }
  if (kebawah == true && stat == false && l2parkirsiap == true ){
        turun();
        delay(2000);
        Stop_y();
        kebawah = false;
        pull = true;
     }
  if (pull == true && stat == false && l2parkirsiap == true ){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && l2parkirsiap == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l2parkirsiap == true ) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && l2parkirsiap == true ){
        Stop_y();
        kebawahfull = false;
        stat = true;
        ulang = false;
        l2parkirsiap = false;
        kekanan = false;
        kekiri = false;
     } 
  }
