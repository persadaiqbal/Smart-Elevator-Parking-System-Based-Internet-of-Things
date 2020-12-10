void printText(char *text, uint16_t color, int x, int y,int textSize)
{
  tft.setCursor(x, y);
  tft.setTextColor(color,ST7735_BLACK);
  tft.setTextSize(textSize);
  tft.setTextWrap(true);
  tft.print(text);
}

void printwaktu_lcd(){
  DateTime now = rtc.now(); //get the current date-time
  uint32_t ts = now.getEpoch();
  
  if (old_ts == 0 || old_ts != ts) {
  old_ts = ts;
  
  minuteNow = now.minute();
  if(minuteNow!=minutePrevious)
  {
    dateString1 = getDayOfWeek(now.dayOfWeek());
    dateString = String(now.date())+"/"+String(now.month());
    dateString= dateString+"/"+ String(now.year()); 
    minutePrevious = minuteNow;
    String hours = String(now.hour());
    if(now.minute()<10)
    {
      hours = hours+":0"+String(now.minute());
    }else
    {
      hours = hours+":"+String(now.minute());
    }
    
    hours.toCharArray(timeChar,100);
    tft.drawRect(0,0,160,128,ST7735_WHITE);
    printText(timeChar, ST7735_WHITE,60,32,2);
    dateString.toCharArray(dateChar,50);
    printText(dateChar, ST7735_GREEN,60,22,1);
    dateString1.toCharArray(dateChar1,50);
    printText(dateChar1, ST7735_BLUE,50,2,2);
  }
}
}
