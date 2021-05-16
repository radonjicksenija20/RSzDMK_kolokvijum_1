/*
 * array.c
 *
 *  Created on: May 16, 2021
 *      Author: ksenija
 */
#include "array.h"

void Sum(int16_t first_element, int16_t difference, int16_t n,int8_t mode)
{
	int8_t suma = 0;
	switch(mode)
	{

	case(ITERATIVE):
			for(int8_t i = 0 ; i < n ; i++)
			{
				suma += i;
			}

			break;

	case(FORMULA):
			suma = n/2 * [2 * (first_element) + (n - 1) * difference];
		    break;

	 default:
			return -1;
	}

}


