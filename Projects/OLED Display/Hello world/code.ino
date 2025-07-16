#include <Wire.h>   //For I2C Communication
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 IrfOled(128,32,&Wire,-1);   //Create object

void setup() {
  // put your setup code here, to run once:
 IrfOled.begin(SSD1306_SWITCHCAPVCC,0x3C);
 IrfOled.clearDisplay();
 IrfOled.setTextSize(1);   //Try 3 or 4
 IrfOled.setTextColor(WHITE);
 IrfOled.setCursor(0,0);

 IrfOled.println("Hello world!");
 IrfOled.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
