int redPin= 9;
int greenPin = 6;
int bluePin = 5;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  
  setColor(255, 0, 0); // Red Color
  delay(1000);
  
  setColor(0, 255, 0); // Green Color
  delay(1000);
  
  setColor(0, 0, 255); // Blue Color
  
  delay(1000);  
  setColor(255, 255, 0); // Yellow

  delay(1000);
  setColor(0, 255, 255); // cyan

  delay(1000);
  setColor(255, 0, 255); // magenta


  delay(1000);

  setColor(255, 255, 255); // white

  delay(1000);
  
  
  
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, 255-redValue);
  analogWrite(greenPin, 255-greenValue);
  analogWrite(bluePin, 255-blueValue);
}
