int red_pin = 6 ;
int yellow_pin = 5 ;
int green_pin = 4  ;
void setup() {
  // put your setup code here, to run once:
  pinMode(red_pin,OUTPUT);
  pinMode(yellow_pin,OUTPUT);
  pinMode(green_pin,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red_pin,HIGH);
  digitalWrite(yellow_pin,LOW);
  digitalWrite(green_pin,LOW);
   delay(7000);
  digitalWrite(red_pin,LOW);
  digitalWrite(yellow_pin,HIGH);
  digitalWrite(green_pin,LOW);
   delay(1000);
  digitalWrite(red_pin,LOW);
  digitalWrite(yellow_pin,LOW);
  digitalWrite(green_pin,HIGH);
   delay(9000);
  
}
