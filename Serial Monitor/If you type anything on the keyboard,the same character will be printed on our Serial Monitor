char incomingChar;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);   //Start the Serial Communication at 9600 bauds per sec
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){     //if there are any characters which are coming
    incomingChar = Serial.read(); //read that value and give the value to the variable incomingChar
    Serial.print("The Arduino received the character: ");   
    Serial.println(incomingChar);
  }
}
//Arduino will keep on waiting
//If you type anything on the keyboard,the same character will be printed on our Serial Monitor
/*The reason you're seeing an extra The Arduino received the character: message on the Serial Monitor is likely due to 
the way the Serial Monitor processes the input. When you type something and press "Enter," the Serial Monitor sends the 
character(s) you typed along with a newline (\n) or carriage return (\r) character 
(depending on the selected option in the Serial Monitor).

Single Character Input: When you type a single character, like A, and press "Enter," the Serial Monitor sends A
 followed by a newline (\n) or carriage return (\r).

Processing in the Arduino:

The Arduino reads the A character, prints The Arduino received the character: A, and waits for more input.
Next, it reads the newline (\n) or carriage return (\r), and prints The Arduino received the character: again, 
but this time without any visible character. */





