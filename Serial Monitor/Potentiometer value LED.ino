void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);  //Center of potentiometer
  pinMode(10,OUTPUT); //LED
}

void loop() {
  // put your main code here, to run repeatedly:
  int potvalue = analogRead(A0);  //potentiometer value //value received from potentiometer
  Serial.begin(9600);              //We begin the Serial Communication

  if(potvalue > 500){        //when we are rotating the potentiometer,if the value is more than 500
    Serial.println(potvalue);
    digitalWrite(10,HIGH);    //Keep the LED ON
    delay(100);
  }
  else{                  //if the value is less than or equal to 500
    Serial.println(potvalue);
    digitalWrite(10,LOW);     //LED OFF
    delay(100);
  }
}
//If Potentiometer value is more than 500 LED is ON
//If Potentiometer value is less than or equal to 500 LED is OFF

*/We are going to read the value of voltage from the potentiometer and control one led
A potentiometer is a three-terminal device which is basically series combination of two Resistors So three terminals.
The extreme ends are connected to Ground and VCC that means the voltage between those two points will remain constant as 0v and 5v.
The Central pin is the voltage Divided Output of these two resistance.
As we are moving the wiper from left to right or in clockwise or anticlockwise ,the value of R1 is increasing,R2 is decreasing and opposite in opposite direction.
The output voltage that we are measuring at the center pin is going to increase or decrease with rotations.This is going to be a analog value which will be anything between 0 to VCC
 
 
Then we need an ADC because the Microcontroller cannot handle analog value
1024 different values can be generated and the values are 0 to 1023 (Since in UNO ADC is 10 bit => 2^10 = 1024 Steps)
For 0 v value is 0 and for 5 v value is 1023.At center for 2.5v value is 512
You can linearly calculate that what will be the value for each analog input
*/
