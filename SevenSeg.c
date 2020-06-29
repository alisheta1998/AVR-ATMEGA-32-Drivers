/*
 * SevenSeg.c
 *
 *  Created on: Sep 6, 2019
 *      Author: hello
 */
#include "Std_types.h"
#include "Registers.h"
#include "Bit_Operations.h"
#include "DIO.h"
#include "SevenSeg.h"

void SevenSeg_Init (void)
{
#if PORT_a == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_b == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_c == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_d == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_e == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_f == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_g == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PORT_dp == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_a == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_b == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_c == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_d == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_e == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_f == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_g == UNINIT
#error "Missing INITIALIZATION"
#endif

#if PIN_dp == UNINIT
#error "Missing INITIALIZATION"
#endif

 DIO_SetPinDirection(PORT_a,PIN_a,OUTPUT);
 DIO_SetPinDirection(PORT_b,PIN_b,OUTPUT);
 DIO_SetPinDirection(PORT_c,PIN_c,OUTPUT);
 DIO_SetPinDirection(PORT_d,PIN_d,OUTPUT);
 DIO_SetPinDirection(PORT_e,PIN_e,OUTPUT);
 DIO_SetPinDirection(PORT_f,PIN_f,OUTPUT);
 DIO_SetPinDirection(PORT_g,PIN_g,OUTPUT);
 DIO_SetPinDirection(PORT_dp,PIN_dp,OUTPUT);
}

void SevenSeg_Display(S8 counter)
{
	switch(counter)
			{
			case 0 :
				PORTA = 0x3F;
				break;
			case 1 :
				PORTA = 0x06;
				break;
			case 2 :
				PORTA = 0x5B;
				break;
			case 3 :
				PORTA = 0x4F;
				break;
			case 4 :
				PORTA = 0x66;
				break;
			case 5 :
				PORTA = 0x6D;
				break;
			case 6 :
				PORTA = 0x7D;
				break;
			case 7 :
				PORTA = 0x07;
				break;
			case 8 :
				PORTA = 0x7F;
				break;
			case 9 :
				PORTA = 0x6F;
				break;
			case 10 :
				PORTA = 0x77;
				break;
			case 11 :
				PORTA = 0x7C;
				break;
			case 12 :
				PORTA = 0x39;
				break;
			case 13 :
				PORTA = 0x5E;
				break;
			case 14 :
				PORTA = 0x79;
				break;
			case 15 :
				PORTA = 0x71;
				break;
			case 100:
				PORTA = 0x00;
				break;
			default :
				counter = 0;
				break;
			}
}
