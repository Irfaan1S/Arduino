#define L LOW
#define H HIGH
#define O OUTPUT

void setup() {
  // put your setup code here, to run once:
  pinMode(13, O);  //A
  pinMode(12, O);  //B
  pinMode(11, O);  //C
  pinMode(10, O);  //D
  pinMode(9, O);   //E
  pinMode(8, O);   //F
  pinMode(7, O);   //G
  pinMode(6, O);   //DP

  Serial.begin(9600);
}

void loop() {
  // Check if data is available from serial
  if (Serial.available()) {
    int input = Serial.read() - '0';  // Convert ASCII to integer
    
    // DISPLAY 1
    if (input == 1) {
      delay(1000);
      digitalWrite(13, H);  //A
      digitalWrite(12, L);  //B
      digitalWrite(11, L);  //C
      digitalWrite(10, H);  //D
      digitalWrite(9, H);   //E
      digitalWrite(8, H);   //F
      digitalWrite(7, H);   //G
      digitalWrite(6, H);   //DP
    }

    // DISPLAY 2
    else if (input == 2) {
      delay(1000);
      digitalWrite(13, L);  //A
      digitalWrite(12, L);  //B
      digitalWrite(11, H);  //C
      digitalWrite(10, L);  //D
      digitalWrite(9, L);   //E
      digitalWrite(8, H);   //F
      digitalWrite(7, L);   //G
      digitalWrite(6, H);   //DP
    }

    // DISPLAY 3
    else if (input == 3) {
      delay(1000);
      digitalWrite(13, L);  //A
      digitalWrite(12, L);  //B
      digitalWrite(11, L);  //C
      digitalWrite(10, L);  //D
      digitalWrite(9, H);   //E
      digitalWrite(8, H);   //F
      digitalWrite(7, L);   //G
      digitalWrite(6, H);   //DP
    }

    // DISPLAY 4
    else if (input == 4) {
      delay(1000);
      digitalWrite(13, H);  //A
      digitalWrite(12, L);  //B
      digitalWrite(11, L);  //C
      digitalWrite(10, H);  //D
      digitalWrite(9, H);   //E
      digitalWrite(8, L);   //F
      digitalWrite(7, L);   //G
      digitalWrite(6, H);   //DP
    }

    // DISPLAY 5
    else if (input == 5) {
      delay(1000);
      digitalWrite(13, L);  //A
      digitalWrite(12, H);  //B
      digitalWrite(11, L);  //C
      digitalWrite(10, L);  //D
      digitalWrite(9, H);   //E
      digitalWrite(8, L);   //F
      digitalWrite(7, L);   //G
      digitalWrite(6, H);   //DP
    }

    // DISPLAY 6
    else if (input == 6) {
      delay(1000);
      digitalWrite(13, L);  //A
      digitalWrite(12, H);  //B
      digitalWrite(11, L);  //C
      digitalWrite(10, L);  //D
      digitalWrite(9, L);   //E
      digitalWrite(8, L);   //F
      digitalWrite(7, L);   //G
      digitalWrite(6, H);   //DP
    }

    // DISPLAY 7
    else if (input == 7) {
      delay(1000);
      digitalWrite(13, L);  //A
      digitalWrite(12, L);  //B
      digitalWrite(11, L);  //C
      digitalWrite(10, H);  //D
      digitalWrite(9, H);   //E
      digitalWrite(8, H);   //F
      digitalWrite(7, H);   //G
      digitalWrite(6, H);   //DP
    }

    // DISPLAY 8
    else if (input == 8) {
      delay(1000);
      digitalWrite(13, L);  //A
      digitalWrite(12, L);  //B
      digitalWrite(11, L);  //C
      digitalWrite(10, L);  //D
      digitalWrite(9, L);   //E
      digitalWrite(8, L);   //F
      digitalWrite(7, L);   //G
      digitalWrite(6, H);   //DP
    }

    // DISPLAY 9
    else if (input == 9) {
      delay(1000);
      digitalWrite(13, L);  //A
      digitalWrite(12, L);  //B
      digitalWrite(11, L);  //C
      digitalWrite(10, L);  //D
      digitalWrite(9, H);   //E
      digitalWrite(8, L);   //F
      digitalWrite(7, L);   //G
      digitalWrite(6, H);   //DP
    }

    // DISPLAY DP (Decimal Point)
    else if (input == 0) {
      delay(1000);
      digitalWrite(13, H);  //A
      digitalWrite(12, H);  //B
      digitalWrite(11, H);  //C
      digitalWrite(10, H);  //D
      digitalWrite(9, H);   //E
      digitalWrite(8, H);   //F
      digitalWrite(7, H);   //G
      digitalWrite(6, L);   //DP
    }
  }
}
//Try typing 1234567890 in Serial Monitor or 0987654321
//or 54321 etc 
