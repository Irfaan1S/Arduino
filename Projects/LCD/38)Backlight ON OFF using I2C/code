#include <Wire.h>                  // Required for I2C communication
#include <LiquidCrystal_I2C.h>     // Include the LiquidCrystal_I2C library

// Create an LCD object. The I2C address is 0x27, and it has 16 columns and 2 rows.
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();                      // Initialize the LCD
                 
}

void loop() {
  // Your main loop code here (if needed)
   lcd.backlight();
  lcd.setCursor(0, 0);             // Set cursor to column 0, row 0
  lcd.print("Hello world!"); 
  delay(500);
  lcd.clear();
   lcd.noBacklight();
  delay(500);
}
