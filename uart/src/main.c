/***********************************************************************
 * $Id::                                                               $
 *
 * Project:	uart: Simple UART echo for LPCXpresso 1700
 * File:	uarttest.c
 * Description:
 * 			LPCXpresso Baseboard uses pins mapped to UART3 for
 * 			its USB-to-UART bridge. This application simply echos
 * 			all characters received.
 *
 ***********************************************************************
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * products. This software is supplied "AS IS" without any warranties.
 * NXP Semiconductors assumes no responsibility or liability for the
 * use of the software, conveys no license or title under any patent,
 * copyright, or mask work right to the product. NXP Semiconductors
 * reserves the right to make changes in the software without
 * notification. NXP Semiconductors also make no representation or
 * warranty that such application will be suitable for the specified
 * use without further testing or modification.
 **********************************************************************/

/*****************************************************************************
 *   History
 *   2010.07.01  ver 1.01    Added support for UART3, tested on LPCXpresso 1700
 *   2009.05.27  ver 1.00    Prelimnary version, first Release
 *
******************************************************************************/
#include "LPC177x_8x.h"
#include "type.h"
#include "uart.h"
#include <string.h>

extern volatile uint32_t UART1Count;
extern volatile uint8_t UART1Buffer[BUFSIZE];

/*****************************************************************************
**   Main Function  main()
This program has been test on LPCXpresso 1700.
*****************************************************************************/
int main (void)
{
	const char* welcomeMsg = "UART1 Online\r\n";
	//SystemInit();	//Called by startup code

	UARTInit(1, 9600);	/* baud rate setting */
	UARTSend(1, (uint8_t *)welcomeMsg , strlen(welcomeMsg) );

	/* Loop forever */
	while (1)
	{
		if ( UART1Count != 0 )
		{
			LPC_UART1->IER = IER_THRE | IER_RLS;				/* Disable RBR */
			UARTSend(1, (uint8_t *)UART1Buffer, UART1Count );
			UART1Count = 0;
			LPC_UART1->IER = IER_THRE | IER_RLS | IER_RBR;		/* Re-enable RBR */
		}
	}
}

/*****************************************************************************
**                            End Of File
*****************************************************************************/
