/*
===============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Copyright (C) 
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC177x_8x.h"
#endif

// TODO: insert other include files here

// TODO: insert other definitions and declarations here

int main(void) {
	int32_t j;

	/* SystemClockUpdate() updates the SystemFrequency variable */
	SystemCoreClockUpdate();

	LPC_GPIO5->DIR = (1<<0);		/* P2.xx defined as Outputs */
	LPC_GPIO5->CLR = (1<< 0);		/* turn off all the LEDs */

	while(1)
	{
		LPC_GPIO5->SET = 1<<0;
		for(j = 1000000; j > 0; j--);
		LPC_GPIO5->CLR = 1<<0;
		for(j = 2000000; j > 0; j--);
	}

}
