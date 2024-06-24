int led0=3;
int led1=4;
int led2=5;

void setup() {
  
  pinMode(led0,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  digitalWrite(led0, HIGH);   
  delay(3000);                      
  digitalWrite(led0, LOW);    
  delay(3000);
  digitalWrite(led1, HIGH);   
  delay(3000);                      
  digitalWrite(led1, LOW);    
  delay(3000); 
  digitalWrite(led2, HIGH);   
  delay(3000);                      
  digitalWrite(led2, LOW);    
  delay(3000);                      
}