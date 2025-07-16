#include <Servo.h>

Servo myServo;  //Create an Object of Servo Named myServo (Customised name can be changed) 

void setup()
{
  myServo.attach(10);  //a pwm pin
}

void loop()
{
  for(int i=0;i<=180;i++){
    myServo.write(i);
    delay(50);
  }
  for(int i=180;i>=0;i--){
    myServo.write(i);
    delay(50);
  }
}
