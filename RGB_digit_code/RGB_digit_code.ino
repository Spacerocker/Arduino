int red = 6;
int blue = 7;
int green = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(255,0,0);
   delay(100);
  digitalWrite(0,255,0);
   delay(100);
  digitalWrite(0,0,255);
   delay(100);
}
