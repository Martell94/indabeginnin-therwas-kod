#include "header.h"

static volatile uint16_t timer0_counter = 0;
static volatile uint16_t timer1_counter = 0;
static volatile uint16_t timer2_counter = 0;

ISR (PCINT0_vect){
	
	if (!BUTTON_PRESSED){
	delay_ms(200);
	//Här går vi till printvalue-funktionen
	}
}

ISR(TIMER0_OVF_vect){
	
	if (++timer0_counter >= 5000)
	{
		PINB = (1 << 0);
		timer0_counter = 0;
	}
	
}

// Vi togglar lysdioder var 781:e avbrott, dvs. var 100:e ms.
ISR(TIMER1_COMPA_vect){ 
	
	if (++timer1_counter >= 781)
	{
		PINB = (1 << 1);
		timer1_counter = 0;
	}
}

ISR(TIMER2_OVF_vect){
	
	if (++timer2_counter >= 10000)
	{
		PINB = (1 << 2);
		timer2_counter = 0;
	}
	
}