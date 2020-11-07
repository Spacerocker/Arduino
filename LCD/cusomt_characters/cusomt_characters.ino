//sketch created by Akshay Joseph
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte smiley[8] = 
 {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
 };

byte heart[8] =
   { B00000,
     B01010,
     B11111,
     B11111,
     B11111,
     B01110,
     B00100,
     B00000
    };
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.createChar(1, smiley);

  lcd.createChar(2, heart);
}

void loop()
{
   lcd.setCursor(5,0);  
   lcd.write(1);

   lcd.setCursor(7,1);  
   lcd.write(2);

   delay(1000);
   lcd.clear();
   delay(500);

   
}
