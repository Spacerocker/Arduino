//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <LiquidCrystal_I2C.h>
#include <Servo.h>


int RED_LED = 2;
int YELLOW_LED = 3;
int GREEN_LED = 4;
int BUZZER_PIN = 10;

Servo myservo;
LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{ 
  myservo.attach(9);
  pinMode(BUZZER_PIN,OUTPUT);
  pinMode(RED_LED,OUTPUT);
  pinMode(YELLOW_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);

  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("TRAFFIC LIGHTS!");
  
}


void loop()
{

  lcd.setCursor(0,1);
  lcd.print("STOP !!!");
  
   myservo.write(90);
   // put your main code here, to run repeatedly:
    digitalWrite(RED_LED,HIGH);
    delay(3000);
    digitalWrite(RED_LED,LOW);
   
    lcd.setCursor(0,1);
    lcd.print("WAIT !!!");

    tone(BUZZER_PIN,1000,3000);
    digitalWrite(YELLOW_LED,HIGH);
    delay(3000);
    digitalWrite(YELLOW_LED,LOW);

    lcd.setCursor(0,1);
    lcd.print("GO !!!");
    myservo.write(180);
    
    digitalWrite(GREEN_LED,HIGH);
    delay(11000);
    digitalWrite(GREEN_LED,LOW);

    tone(BUZZER_PIN,500,3000);

    lcd.setCursor(0,1);
    lcd.print("WAIT !!!");


    digitalWrite(YELLOW_LED,HIGH);
    delay(3000);
    digitalWrite(YELLOW_LED,LOW);

    
  
}
