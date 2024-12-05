int current_state = 0;
int oldstate = 0;
int buttonstate = 0;

void setup(){
     
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);

    pinMode(13,INPUT);
}
void loop(){

  buttonstate = digitalRead(13);  //check
  if(buttonstate == HIGH){
    delay(50);
    buttonstate = digitalRead(13);
    if(buttonstate == LOW){
      current_state = oldstate + 1;
    }
  }
  else{
    delay(100);
  }

  switch(current_state){
  case 1:
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      oldstate=current_state;
      break;

  case 2:
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      oldstate=current_state;
      break;

  case 3:
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      oldstate=current_state;
      break;

  default:
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      oldstate=0;
      break;
  }  
}
