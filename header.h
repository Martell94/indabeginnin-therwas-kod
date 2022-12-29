#ifndef HEADER_H_
#define HEADER_H_

#include "misc.h"
#include "temp.h"
#include "adc.h"

extern temp_t tmp36;

#define set(reg,bit) reg |= (1<<bit)
#define clr(reg,bit) reg &= ~(1<<bit)
#define read(reg,bit) (reg & (1<<bit))

#define BUTTON PORTB5
#define BUTTON_PRESSED read(PINB, BUTTON)

#define SENSOR PORTC2
#define SENSORVAL read(PINC, SENSOR)

void setup(); //från setup.c
void init_adc (temp_t* self);


#endif /* HEADER_H_ */