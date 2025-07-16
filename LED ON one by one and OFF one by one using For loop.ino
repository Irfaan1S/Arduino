void setup() {
  // put your setup code here, to run once:
  for(int pinNum = 8;pinNum <= 10;pinNum++){   //8 to 10  i.e;8,9,10 these are the values it will consider
    pinMode(pinNum,OUTPUT);                   //all these pins will be set as OUTPUT pins instead of writing it three times //If there were many like 14 pins so no need to write one by one
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int pinNum = 8;pinNum <= 10;pinNum++){
    digitalWrite(pinNum,HIGH);             
    delay(1000);                             
  }
  //all the pin numbers HIGH with a delay of 1 sec   //First pin number 8 will be written as HIGH then 9 then 10 each after 1 sec

  for(int pinNum = 10;pinNum >= 8;pinNum--){   //Starting from 10 going till 8  
    digitalWrite(pinNum,LOW);                  //put them (i.e; pins) at LOW
    delay(1000);                                //with a delay of 1sec
  } 
}
//First it will glow the leds from 8 to 10 
//Then it will switch them off from 10 to 8 and it will keep on repeating
