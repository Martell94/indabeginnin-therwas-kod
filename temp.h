#ifndef TEMP_H_
#define TEMP_H_

#include "header.h"

typedef struct{
	double temp;
	uint8_t pin;
	
} temp_t;

void init_temps(temp_t* self, const uint8_t pin);
void get_temp();
void print_temp();

#endif /* TEMP_H_ */