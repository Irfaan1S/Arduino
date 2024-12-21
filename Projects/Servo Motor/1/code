#include <Servo.h>

Servo IrfServo;
void setup()
{
  IrfServo.attach(9);
  Serial.begin(9600);
}

void loop()
{
    IrfServo.write(90);
    Serial.println(IrfServo.read());
    delay(500);
}
