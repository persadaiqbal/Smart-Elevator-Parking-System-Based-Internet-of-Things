     /////////////////////////////////////////////////////////////////////    
void val5(){
 
 if (val == 5 && stat == true ) {
       l2ambil = true;
       stat = false;
       if (l2ambil == true && stat == false )
       naik();
       delay(12000);
       keatas = false;
       berhenti = true;
       stat = false;
     }
     if (berhenti == true && stat == false && l2ambil == true) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
      if (push == true && stat == false && l2ambil == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
      if (digitalRead(endstop_maju) == 1 && berhenti2 == true && stat == false && l2ambil == true){
        Stop_x();
        delay(1000);
        keatas = true;
        berhenti2 = false;
     }
     if (keatas == true && stat == false && l2ambil == true){
        naik();
        delay(3400);
        Stop_y();
        keatas = false;
        pull = true;
     }
  if (pull == true && stat == false && l2ambil == true){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && stat == false && l2ambil == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l2ambil == true) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && stat == false && l2ambil == true){
        Stop_y();
        kebawahfull = false;
        //stat = true;
        ulang = false;
        kekiri = true;
     }
   if (kekiri == true && stat == false && l2ambil == true){
       tengahtoout();
       kekiri = false;
       take = true;
      // siap = true;
      // l1parkir = false;
     }
    if (digitalRead(LSout) == 1 && take == true && stat == false && l2ambil == true) {
      Stop_z();
     // kekanan = false;
      //l2ambil = false;
      take = false;
      siap2 = true;
   }
 ///////////////////////////////////////////////////////////////    
  if (digitalRead(sout) == 0 && stat == false && siap2 == true && l2ambil == true){
        l2ambil= false;
        l2ambilsiap = true;
        outtotengah();
        delay(1000);
        naik();
        delay(13400);
        berhenti = true;
        siap2 = false;
     }
  if (berhenti == true && stat == false && l2ambilsiap == true ) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
  if (push == true && stat == false && l2ambilsiap == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
  if (digitalRead(endstop_maju) == 1 && stat == false && berhenti2 == true && l2ambilsiap == true ){
        Stop_x();
        delay(1000);
        kebawah = true;
        berhenti2 = false;
     }
  if (kebawah == true && stat == false && l2ambilsiap == true ){
        turun();
        delay(2000);
        Stop_y();
        kebawah = false;
        pull = true;
     }
  if (pull == true && stat == false && l2ambilsiap == true ){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && l2ambilsiap == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l2ambilsiap == true ) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && l2ambilsiap == true ){
        Stop_y();
        kebawahfull = false;
        stat = true;
        ulang = false;
        l2ambilsiap = false;
        kekanan = false;
        kekiri = false;
        //siap = false; 
      //  siap2 = false;
     } 
}
