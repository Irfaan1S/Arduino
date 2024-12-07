#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    lcd.begin(16, 2); // Initialize 16x2 LCD
}

void loop() {
    // Display text on the first row
    lcd.setCursor(0, 0);
    lcd.print("Hi I am Irfaan");
    delay(500);

    // Move the text to the second row
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Hi I am Irfaan");
    delay(500);

    // Clear the second row to simulate scrolling
    lcd.clear();
    delay(500);
}

//https://www.tinkercad.com/things/dw4fYaEc5Lf-36vertical-scroll
