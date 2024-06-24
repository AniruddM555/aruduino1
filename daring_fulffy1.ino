int buttonpin=4;
int led1=5;
int buttonstate=0;
void setup() {
  
  pinMode(led1,OUTPUT);
  pinMode(buttonpin,INPUT);
}

void loop() {
  buttonstate=digitalRead(buttonpin);
  if (buttonstate==HIGH)
  {
    digitalWrite(led1,HIGH);
      delay(1000);
  }
  else
    digitalWrite(led1,LOW);
      delay(1000);
    
}