#ifndef LED_H
#define LED_H
#include <Arduino.h>
class LED
{

public:
	LED() {}
	virtual void setPin(void) = 0;
	virtual void pinBlink(const int _delay, unsigned long interVal) = 0;
};

class Pins : public LED
{
	int _pin;

public:
	Pins(int pin);
	void setPin();
	void pinBlink(const int _delay, unsigned long interVal);
};

#endif /* LED_H */
