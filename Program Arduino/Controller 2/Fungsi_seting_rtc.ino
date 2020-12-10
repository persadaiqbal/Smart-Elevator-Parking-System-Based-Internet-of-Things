void setRTCTime()
{
  DateTime dt(2020, 8, 2, 10, 36, 20, 7); // Year, Month, Day, Hour, Minutes, Seconds, Day of Week
  rtc.setDateTime(dt); //Adjust date-time as defined 'dt' above 
}

String getDayOfWeek(int i)
{
  switch(i)
  {
    case 1: return "Senin";break;
    case 2: return "Selasa";break;
    case 3: return "Rabu";break;
    case 4: return "Kamis";break;
    case 5: return "Jumat";break;
    case 6: return "Sabtu";break;
    case 7: return "Minggu";break;
    default: return "Senin";break;
  }
}
