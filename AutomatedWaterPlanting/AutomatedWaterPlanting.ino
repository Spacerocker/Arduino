
int RELAY_PIN = 13;  // Connect Pin 13 from arduino to Relay signal pin (IN)
int SENSOR_PIN = 8;   // Connect the SENSOR Digitalout (D0) to Arduino 
int val; 
void setup() {
  pinMode(RELAY_PIN,OUTPUT); //Set pin 13 as OUTPUT pin, to send signal to relay
  pinMode(SENSOR_PIN,INPUT); //Set pin 8 as input pin, to receive data from Soil moisture sensor.
  Serial.begin(9600);
}

void loop() { 
  val = digitalRead(SENSOR_PIN); 
  Serial.println(val);
  if(val == LOW) 
  {
  digitalWrite(RELAY_PIN,HIGH); //if soil moisture sensor provides LOW value send LOW value to relay
  }
  else
  {
  digitalWrite(RELAY_PIN,LOW); //if soil moisture sensor provides HIGH value send HIGH value to relay
  }
  // wait for half second
  delay(500);
}
