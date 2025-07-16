void setup() {
  // put your setup code here, to  run once:
  pinMode(13,OUTPUT);  //A
  pinMode(12,OUTPUT);  //B
  pinMode(11,OUTPUT);  //C
  pinMode(10,OUTPUT);  //D
  pinMode(9,OUTPUT);   //E
  pinMode(8,OUTPUT);   //F
  pinMode(7,OUTPUT);   //G
  pinMode(6,OUTPUT);   //DP
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(13,HIGH);    //A
  digitalWrite(12,LOW);     //B
  digitalWrite(11,LOW);     //C
  digitalWrite(10,HIGH);   //D
  digitalWrite(9,HIGH);    //E
  digitalWrite(8,HIGH);    //F
  digitalWrite(7,HIGH);    //G
  digitalWrite(6,HIGH);    //DP
}
