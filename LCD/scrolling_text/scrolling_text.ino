//sketch created by Akshay Joseph
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop()
{
     lcd.setCursor(0,0);
  lcd.print("Scroll demo - ");
  delay(1500);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(500);
    }
  // turn off automatic scrolling
  lcd.noAutoscroll();
 
  // clear screen 
  lcd.clear();
  
  //Delay
  delay(1000);
}
