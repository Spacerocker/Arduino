int potpin = A0;  
int ledpin = 9 ;
int potval;    
int ledval;

void setup() {
  pinMode(ledpin,OUTPUT);  
  pinMode(potpin,INPUT);
}

void loop() {
  potval = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  ledval = map(potval, 0, 1023, 0, 255);     // scale it to use  (value between 0 and 255)
  analogWrite(ledpin,ledval);                 
}  
