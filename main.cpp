/*Program to display simple messages and values on an LCD screen
Adapted from publically available GITHUB program for an arduino
01/11/23
Version 3
*/

/* Ensure RW LCD pin is connected to GND and connect a 10 K potentiometer with wiper connected to V0 and other ends to A and K LCD pins.
 Connect a 100 ohm resistor (ideally 500 Ohm) between A LCD pin and VDD.
 */

#include "mbed.h"
#include "TextLCD.h"

/*#define RS_PIN D0   // RS pin of LCD connected to pin D0 on Nucleo board
#define EN_PIN D1   // EN pin of LCD connected to pin D1
#define D4_PIN D2   // D4 pin of LCD connected to pin D2
#define D5_PIN D3   // D5 pin of LCD connected to pin D3
#define D6_PIN D4   // D6 pin of LCD connected to pin D4
#define D7_PIN D5   // D7 pin of LCD connected to pin D5 */

TextLCD lcd(D0, D1, D2, D3, D4, D5, TextLCD::LCD16x2); // Connect these nucleo pins to RS, E, D4, D5, D6 and D7 pins of the LCD

// Function prototype
void displayData();

void displayData() {
    lcd.locate(0, 0); // Set cursor to column 0 and row 0
    lcd.printf("AB:123456"); // Display "AB:123456"

    lcd.locate(0, 1); // Set cursor to column 0 and row 1
    lcd.printf("CD:123456"); // Display "CD:123456"
}

int main() {
    lcd.cls(); // Clear LCD screen

    // Display data in a loop
    while(true) {
        displayData(); // Call the displayData function
        thread_sleep_for(1000); // Delay for 1 second
    }
}

// Function definition to display data on the LCD
