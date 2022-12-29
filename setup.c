#include "header.h"

static inline void init_interrupts();
static inline void init_timer();

void setup()
{
	// read(PORTB, BUTTON);
	// init_interrupts();
	init_timer();
	// init_temps(&tmp36, SENSOR);
	// init_adc(&tmp36);
	asm("SEI");
	return;
}

static inline void init_interrupts()
{
	PCICR |= (1<<PCIE0);
	PCMSK0 |= (1<<BUTTON);
	return;
}

static inline void init_timer()
{
	TCCR0B = (1 << CS01);
	TIMSK0 = (1 << TOIE0);
	
	TCCR1B = (1<<WGM12) | (1 << CS11);
	OCR1A = 256;
	TIMSK1 = (1 << OCIE1A);
	
	TCCR2B = (1 << CS21);
	TIMSK2 = (1 << TOIE2);
	
	return;
}
