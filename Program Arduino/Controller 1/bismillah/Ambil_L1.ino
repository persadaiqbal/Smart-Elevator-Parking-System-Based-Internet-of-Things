///////////////////////////////////////////////////////////////////////
void val4(){
if (val == 4 && stat == true ) {
l1ambil = true;
       stat = false;
       if (l1ambil == true && stat == false )
       naik();
       delay(1190);
       keatas = false;
       berhenti = true;
       stat = false;
     }
     if (berhenti == true && stat == false && l1ambil == true) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
      if (push == true && stat == false && l1ambil == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
      if (digitalRead(endstop_maju) == 1 && berhenti2 == true && stat == false && l1ambil == true){
        Stop_x();
        delay(1000);
        keatas = true;
        berhenti2 = false;
     }
     if (keatas == true && stat == false && l1ambil == true){
        naik();
        delay(2900);
        Stop_y();
        keatas = false;
        pull = true;
     }
  if (pull == true && stat == false && l1ambil == true){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && stat == false && l1ambil == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l1ambil == true) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && stat == false && l1ambil == true){
        Stop_y();
        kebawahfull = false;
        //stat = true;
        ulang = false;
        kekiri = true;
     }
   if (kekiri == true && stat == false && l1ambil == true){
       tengahtoout();
       kekiri = false;
       take = true;
      // siap = true;
      // l1parkir = false;
     }
    if (digitalRead(LSout) == 1 && take == true && stat == false && l1ambil == true) {
      Stop_z();
     // kekanan = false;
     // l1ambil = false;
      take = false;
      siap1 = true;
   }  
     
 ///////////////////////////////////////////////////////////////    
  if (digitalRead(sout) == 0 && stat == false && siap1 == true && l1ambil == true){
        l1ambil = false;
        l1ambilsiap = true;
        delay(1500);
        outtotengah();
        delay(1000);
        naik();
        delay(2450);
        berhenti = true;
        siap1 = false;
     }
  if (berhenti == true && stat == false && l1ambilsiap == true ) {
        Stop_y();
        delay(1000);
        berhenti = false;
        push = true;
      }
  if (push == true && stat == false && l1ambilsiap == true ) {
        maju();
        push = false;
        berhenti2 = true;
      }
  if (digitalRead(endstop_maju) == 1 && stat == false && berhenti2 == true && l1ambilsiap == true ){
        Stop_x();
        delay(1000);
        kebawah = true;
        berhenti2 = false;
     }
  if (kebawah == true && stat == false && l1ambilsiap == true ){
        turun();
        delay(1000);
        Stop_y();
        kebawah = false;
        pull = true;
     }
  if (pull == true && stat == false && l1ambilsiap == true ){
        mundur();
        siap = true;
     }
  if (digitalRead(endstop_mundur) == 1 && siap == true && l1ambilsiap == true ){
        Stop_x();
        siap = false;
        pull = false;
        kebawahfull = true;
     }
  if (kebawahfull == true && stat == false && l1ambilsiap == true ) {
        turun();
        ulang = true;
       // kebawahfull = false;
     }
  if (digitalRead(endstop_turun) == 1 && ulang == true && l1ambilsiap == true ){
        Stop_y();
        kebawahfull = false;
        stat = true;
        ulang = false;
        l1ambilsiap = false;
        kekanan = false;
        kekiri = false;
        //siap = false; 
       // siapl = false;
     } 
}
