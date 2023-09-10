#include "Led.h"

Pins::Pins(int pin)
{
    _pin = pin;
}

void Pins::setPin(void)
{
    pinMode(_pin, OUTPUT);
}

void Pins::pinBlink(const int _delay, unsigned long interVal)
{
    static bool state = HIGH;
    static unsigned long prevSec = 0;

    if (interVal - prevSec >= _delay)
    {
        prevSec = interVal;
        digitalWrite(_pin, (state = !state));
    }
}
