char incomingChar;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    incomingChar = Serial.read();
    if (incomingChar != '\n' && incomingChar != '\r') {
      Serial.print("The Arduino received the character: ");
      Serial.println(incomingChar);
    }
  }
}
/*With this code, the Arduino will ignore newline (\n) and carriage return (\r) characters,
preventing the extra print statements.*/
