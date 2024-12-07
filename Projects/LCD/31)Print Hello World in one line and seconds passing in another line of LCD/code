#include <LiquidCrystal.h>

LiquidCrystal Irfaan_lcd(12,11,5,4,3,2);

void setup(){
    Irfaan_lcd.begin(16,2);
     
};
void loop(){
     int seconds = millis() /1000;
     Irfaan_lcd.clear(); 
  
     Irfaan_lcd.setCursor(0,0);
     Irfaan_lcd.print("Hello world!");
      
     Irfaan_lcd.setCursor(0,1);
     Irfaan_lcd.print(seconds);
     delay(1000);
};
