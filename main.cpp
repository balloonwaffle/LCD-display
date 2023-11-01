#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D0, D1, D2, D3, D4, D5, TextLCD::LCD20x4); // rs, e, d4-d7

int main() {
    lcd.printf("Hello World!\n");
}