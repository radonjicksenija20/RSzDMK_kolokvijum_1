/*
 * main.c
 *
 *  Created on: May 16, 2021
 *      Author: ksenija
 */
#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include <string.h>


#include "usart.h"
#include "..\pin\pin.h"
#include "..\timer\timer.h"
#include "array.h"



int main()
{
	int16_t first_element, difference;
	int8_t mode[] ;

	while(1)
	{

		usartPutString(PSTR("Unesite prvi element") );
		while(!usartAvailable());
		_delay_ms(500);
		first_element = usartGetParseInt();

		usartPutString(PSTR("Unesite razliku:"));
		while(!usartAvailable());
		_delay_ms(500);
		difference = usartGetParseInt();

		usartPutString(PSTR("Unesite MODE:"));
		usartGetString(mode);




	}
	return 0;

}
