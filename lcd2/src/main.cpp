#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

int SDA_pin = D7;
int SCL_pin = D4;
LiquidCrystal_I2C lcd(0x27, 16, 2); // Set the LCD address to 0x27 for a 16 chars and 2-line display




void setup() {
  // put your setup code here, to run once:
  Wire.begin(SDA_pin, SCL_pin);
  lcd.init();
  lcd.backlight(); // Turn on the backlight
  lcd.setCursor(0, 0); // Set cursor to first column of first row
  lcd.print("dit tolong dit"); // Print a message to the LCD
  lcd.setCursor(1,1);
  lcd.print("mine dontol"); // Print a message to the LCD
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.scrollDisplayLeft(); // Scroll the display to the left
  delay(300); // Wait for 0.5 seconds
}

// put function definitions here:
