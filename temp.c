#include "header.h"

void init_temps(temp_t* self, const uint8_t pin)
{
	self->pin = pin;
	init_adc(self);
	// Initiera seriell överföring, 9600 kbps.
	return;
}

void get_temp(temp_t* self)
{
	const double input_voltage = adc_getv(self) /1023.0 * 5.0;
	self->temp = (input_voltage * 100) - 50;
	
	return;
}


void print_temp(temp_t* self)
{
	
	return;
}

