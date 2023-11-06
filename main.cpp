#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D0, D1, D2, D3, D4, D5, TextLCD::LCD20x4); // rs, e, d4-d7

int main() 
{
    lcd.cls(); //clears the lcd screen
    lcd.locate(0,0); //sets the cursor to column 0 and row 1
    lcd.printf("Hello World!\n"); //displays the message Hello World on the LCD

    lcd.locate(0,1); //set cursor on row number 1 (bottom row)
    lcd.printf("The value is %d", 25);
   
  
}