int redled = 7;
int yellowled = 2;
int greenled = 4;

void setup() {
pinMode(redled,OUTPUT);
pinMode(yellowled,OUTPUT);
pinMode(greenled,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(redled,HIGH);
  delay(30000);
 digitalWrite(redled,LOW);
  delay(30000);
 digitalWrite(yellowled,HIGH);
  delay(20000);
 digitalWrite(yellowled,LOW);
  delay(20000);
 digitalWrite(greenled,HIGH);
  delay(10000);
 digitalWrite(greenled,LOW);
  delay(10000); 
}
