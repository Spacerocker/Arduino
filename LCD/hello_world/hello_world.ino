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
    // Print on first row
  lcd.setCursor(0,0);
  lcd.print("Hello world!");
  
  // Wait 1 second
  delay(1000);
  
  // Print on second row
  lcd.setCursor(0,1);
  lcd.print("How are you?");
  
  // Wait 8 seconds
  delay(5000);
  
  // Clear the display
  lcd.clear();

  delay(2000);
}
