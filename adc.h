#include "header.h"

#ifndef ADC_H_
#define ADC_H_

typedef struct{
	uint8_t pin;	
} adc_t;

void init_adc (temp_t* self);
uint16_t adc_getv(temp_t*self);


#endif /* ADC_H_ */