//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <LiquidCrystal_I2C.h>


int redled = 8;
int yellowled = 7;
int greenled = 4;



LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  pinMode(redled,OUTPUT);
  pinMode(yellowled,OUTPUT);
  pinMode(greenled,OUTPUT);

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
   // put your main code here, to run repeatedly:
    digitalWrite(redled,HIGH);
    delay(3000);
    digitalWrite(redled,LOW);
   
    lcd.setCursor(0,1);
    lcd.print("WAIT !!!");

    digitalWrite(yellowled,HIGH);
    delay(3000);
    digitalWrite(yellowled,LOW);

    lcd.setCursor(0,1);
    lcd.print("GO !!!");

    digitalWrite(greenled,HIGH);
    delay(3000);
    digitalWrite(greenled,LOW);

  
}
