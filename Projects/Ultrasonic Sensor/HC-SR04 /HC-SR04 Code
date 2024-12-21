int duration;
int distance;

const int trigPin = 10;
const int echoPin = 11;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  duration = pulseIn(echoPin,HIGH); //used to measure the duration of a pulse on a pin.//To read the duration of echo pulse in microsecond
  
  distance = duration * 0.034/2;  //Since speed of sound is 343 m/s //0.034 cm/microsecond is speed of sound //It is divided by 2 since the ultrasonic sensor transmits and receives signal which is two times the distance and time 
  //The sound wave travels to the object and back, so the total travel distance is twice the distance to the object. To find the one-way distance
  
  Serial.print("Distance: ");
  Serial.println(distance);

}

//Trig is Trigger To emit Sound waves  //High pulse
//Echo sends the timing pulse  i.e; the sound wave is received  //Low Pulse
//Both to be connected to a digital Pin
