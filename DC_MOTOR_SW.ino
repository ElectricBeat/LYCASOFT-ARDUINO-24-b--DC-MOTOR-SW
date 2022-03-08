const int buttonPin = 8;   
const int buttonPin1 = 12;  
int buttonState = 0,buttonState1 = 0;   

void setup() 
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  PORTB=0x11;
}

void loop() 
{
  buttonState = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin1);
  
  if (buttonState ==LOW) 
  {     
    digitalWrite(9, 1);  
    digitalWrite(10, 0);
  } 
  
  else if (buttonState1 ==LOW) 
  {     
    digitalWrite(10, 1);  
    digitalWrite(9, 0);
  } 
  
  else
  {
    digitalWrite(9, 0);  
    digitalWrite(10, 0);
  }
}
