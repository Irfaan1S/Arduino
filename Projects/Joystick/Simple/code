  int xValue = 0;
  int yValue = 0;
  int sw;

  void setup() {
    // put your setup code here, to run once:
    pinMode(8, INPUT_PULLUP);
    Serial.begin(9600);
  }

  void loop() {
    // put your main code here, to run repeatedly:
    xValue = analogRead(A0);
    yValue = analogRead(A1);
  
    sw = digitalRead(8);

    Serial.print("X: ");
    Serial.print(xValue);

    Serial.print(",Y: ");
    Serial.print(yValue);
    
    Serial.print(",Button: ");
    if(sw==LOW){
      Serial.print("Button Pressed!");
    }
    else{
      Serial.print("Button Not Pressed!");
    }
    Serial.println(" ");
    delay(500);
  }
