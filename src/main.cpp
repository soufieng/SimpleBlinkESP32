#include "Led.h"

// Define the blink intervals in milliseconds
#define BLINK_INTERVALS 750

// Create an instance of the Pins class for the LED
Pins led(GPIO_NUM_2);

void setup(void)
{
    // Set up the pin for the LED
    led.setPin();
}

void loop(void)
{
    // Get the current time in milliseconds
    unsigned long milliSec = millis();

    // Blink the LED at specified intervals
    led.pinBlink(BLINK_INTERVALS, milliSec);
}