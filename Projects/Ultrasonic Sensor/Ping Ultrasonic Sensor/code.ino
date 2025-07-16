int duration;
int distance;

void setup(){
  Serial.begin(9600);
}

void loop(){
   pinMode(7,OUTPUT);
  
   digitalWrite(7,HIGH);
   delayMicroseconds(10);
   digitalWrite(7,LOW);
   delayMicroseconds(2);
  
  
  pinMode(7,INPUT);
  
  duration = pulseIn(7,HIGH);
  
  distance = duration * 0.034 /2;
  
  Serial.print("distance: ");
  Serial.println(distance);
  delay(500);
}
