/*
===============================================================================
 Name        : main.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#ifdef __USE_CMSIS
#include "LPC177x_8x.h"
#endif

#include <cr_section_macros.h>

volatile static int led = 1;

void TIMER0_IRQHandler(void)
{
	if (LPC_TIM0->IR & (1 << 0))
	{
		LPC_TIM0->IR |= 1 << 0;
	}

	/* Sequence: R-Y-G */
	led <<= 1;
	if (led > 4)
		led = 1;
	LPC_GPIO3->PIN = led << 29;
}


int main(void)
{
	SystemCoreClockUpdate();

	/* GPIO init for the RGB LED ports */
	LPC_GPIO3->DIR  = (1 << 31) | (1 << 30) | (1 << 29);
	LPC_GPIO3->MASK = ~((1 << 31) | (1 << 30) | (1 << 29));
	LPC_GPIO3->CLR  = (1 << 31) | (1 << 30) | (1 << 29);

	/* Timer init */
	LPC_TIM0->MR0 = PeripheralClock;
	LPC_TIM0->MCR = 0x3;
	NVIC_EnableIRQ(TIMER0_IRQn);
	LPC_TIM0->TCR = 0x1;

	while (1)
		;
	return 0;
}
