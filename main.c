/********************************************************************************
* main.c: 
********************************************************************************/
#include "header.h"

temp_t tmp36; //Deklareras för bruk i hela koden.



/********************************************************************************
* main: 
********************************************************************************/
int main(void)
{
	
	DDRB = (1<<0) | (1 << 1) | (1 << 2); //Test av portar.
	
	setup();

	
	while (1)
	{	
	}

	return 0;
}

