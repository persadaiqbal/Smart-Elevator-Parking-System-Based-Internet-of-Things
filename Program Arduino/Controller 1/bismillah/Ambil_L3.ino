///////////////////////////////////////////////////////////////////////////
void val6(){
 if (val == 6 && stat == true ) {
       l3ambil = true;
       stat = false;
       if (l3ambil == true && stat == false )
       naik();
       delay(23200);
       keatas = false;
       berhenti = true;
       stat = false;
     }
     if (berhenti == true && stat == false && l3ambil == true) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
      if (push == true && stat == false && l3ambil == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
      if (digitalRead(endstop_maju) == 1 && berhenti2 == true && stat == false && l3ambil == true){
        Stop_x();
        delay(1000);
        keatas = true;
        berhenti2 = false;
     }
     if (keatas == true && stat == false && l3ambil == true){
        naik();
        delay(2800);
        Stop_y();
        keatas = false;
        pull = true;
     }
  if (pull == true && stat == false && l3ambil == true){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && stat == false && l3ambil == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l3ambil == true) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && stat == false && l3ambil == true){
        Stop_y();
        kebawahfull = false;
        //stat = true;
        ulang = false;
        kekiri = true;
     }
   if (kekiri == true && stat == false && l3ambil == true){
       tengahtoout();
       kekiri = false;
       take = true;
      // siap = true;
      // l1parkir = false;
     }
    if (digitalRead(LSout) == 1 && take == true && stat == false && l3ambil == true) {
      Stop_z();
     // kekanan = false;
     // l3ambil = false;
      take = false;
      siap3  = true;
   } 
 ///////////////////////////////////////////////////////////////    
  if (digitalRead(sout) == 0 && stat == false && siap3 == true && l3ambil == true ){
        l3ambil = false;
        l3ambilsiap = true;
        outtotengah();
        delay(1000);
        naik();
        delay(24300);
        berhenti = true;
        siap3 = false;
     }
  if (berhenti == true && stat == false && l3ambilsiap == true ) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
  if (push == true && stat == false && l3ambilsiap == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
  if (digitalRead(endstop_maju) == 1 && stat == false && berhenti2 == true && l3ambilsiap == true ){
        Stop_x();
        delay(1000);
        kebawah = true;
        berhenti2 = false;
     }
  if (kebawah == true && stat == false && l3ambilsiap == true ){
        turun();
        delay(2000);
        Stop_y();
        kebawah = false;
        pull = true;
     }
  if (pull == true && stat == false && l3ambilsiap == true ){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && l3ambilsiap == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l3ambilsiap == true ) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && l3ambilsiap == true ){
        Stop_y();
        kebawahfull = false;
        stat = true;
        ulang = false;
        l3ambilsiap = false;
        kekanan = false;
        kekiri = false;
        //siap = false; 
       // siap3 = false;
     } 
}
