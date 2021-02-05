int red = 5;
int yellow = 4;
int green = 3;  
int inPin = 2;
int buttonState = 0;          

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT); 
  pinMode(green, OUTPUT);  
  pinMode(inPin, INPUT);  
}

void loop() {
  buttonState = digitalRead(inPin);
  if(buttonState == HIGH){
      digitalWrite(red, LOW);            
      digitalWrite(green, HIGH);
      delay(3000);                       
      digitalWrite(green, LOW); 
      digitalWrite(yellow, HIGH);
      delay(1000);
      digitalWrite(yellow, LOW);     
  }else{
      digitalWrite(red, HIGH);
  }
}
