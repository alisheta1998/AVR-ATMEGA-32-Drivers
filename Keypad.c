/*
 * Keypad.c
 *
 *  Created on: Sep 6, 2019
 *      Author: hello
 */
#include "Std_types.h"
#include "Registers.h"
#include "DIO.h"
#include "Keypad.h"

void Keypad_Init(void)
{
#if R1_PORT == UNINIT
#error "Missing Initialization"
#endif
#if R2_PORT == UNINIT
#error "Missing Initialization"
#endif
#if R3_PORT == UNINIT
#error "Missing Initialization"
#endif
#if R4_PORT == UNINIT
#error "Missing Initialization"
#endif
#if C1_PORT == UNINIT
#error "Missing Initialization"
#endif
#if C2_PORT == UNINIT
#error "Missing Initialization"
#endif
#if C3_PORT == UNINIT
#error "Missing Initialization"
#endif
#if C4_PORT == UNINIT
#error "Missing Initialization"
#endif
#if R1_PIN == UNINIT
#error "Missing Initialization"
#endif
#if R2_PIN == UNINIT
#error "Missing Initialization"
#endif
#if R3_PIN == UNINIT
#error "Missing Initialization"
#endif
#if R4_PIN == UNINIT
#error "Missing Initialization"
#endif
#if C1_PIN == UNINIT
#error "Missing Initialization"
#endif
#if C2_PIN == UNINIT
#error "Missing Initialization"
#endif
#if C3_PIN == UNINIT
#error "Missing Initialization"
#endif
#if C4_PIN == UNINIT
#error "Missing Initialization"
#endif


	DIO_SetPinDirection(R1_PORT,R1_PIN,OUTPUT);
	DIO_SetPinDirection(R2_PORT,R2_PIN,OUTPUT);
	DIO_SetPinDirection(R3_PORT,R3_PIN,OUTPUT);
	DIO_SetPinDirection(R4_PORT,R4_PIN,OUTPUT);

	DIO_SetPinDirection(C1_PORT,C1_PIN,INPUT);
	DIO_SetPinDirection(C3_PORT,C2_PIN,INPUT);
	DIO_SetPinDirection(C3_PORT,C3_PIN,INPUT);
	DIO_SetPinDirection(C4_PORT,C4_PIN,INPUT);

	DIO_SetPinPullUp(C1_PORT,C1_PIN);
	DIO_SetPinPullUp(C2_PORT,C2_PIN);
	DIO_SetPinPullUp(C3_PORT,C3_PIN);
	DIO_SetPinPullUp(C4_PORT,C4_PIN);

	DIO_SetPinValue(R1_PORT,R1_PIN,HIGH);
	DIO_SetPinValue(R2_PORT,R2_PIN,HIGH);
	DIO_SetPinValue(R3_PORT,R3_PIN,HIGH);
	DIO_SetPinValue(R4_PORT,R4_PIN,HIGH);

}

U8 Keypad_Scan(void)
{
	//INITIALIZING
	U8 RetVal = 0 ;


	DIO_SetPinValue(R1_PORT,R1_PIN,LOW);
	DIO_SetPinValue(R2_PORT,R2_PIN,HIGH);
	DIO_SetPinValue(R3_PORT,R3_PIN,HIGH);
	DIO_SetPinValue(R4_PORT,R4_PIN,HIGH);

	if(DIO_GetPinValue(C1_PORT,C1_PIN) == (U8)0)
		{
			RetVal=0;
		}
	else if (DIO_GetPinValue(C2_PORT,C2_PIN) == (U8)0)
		{
			RetVal=1;
		}
	else if (DIO_GetPinValue(C3_PORT,C3_PIN) == (U8)0)
		{
			RetVal=2;
		}
	else if (DIO_GetPinValue(C4_PORT,C4_PIN) == (U8)0)
		{
			RetVal=3;
		}
	else
		{
			RetVal=100;
		}
	DIO_SetPinValue(R1_PORT,R1_PIN,HIGH);
	DIO_SetPinValue(R2_PORT,R2_PIN,LOW);
	DIO_SetPinValue(R3_PORT,R3_PIN,HIGH);
	DIO_SetPinValue(R4_PORT,R4_PIN,HIGH);

	if(DIO_GetPinValue(C1_PORT,C1_PIN) == (U8)0)
		{
			RetVal=4;
		}
		else if (DIO_GetPinValue(C2_PORT,C2_PIN) == (U8)0)
		{
			RetVal=5;
		}
		else if (DIO_GetPinValue(C3_PORT,C3_PIN) == (U8)0)
		{
			RetVal=6;
		}
	else if (DIO_GetPinValue(C4_PORT,C4_PIN) == (U8)0)
		{
			RetVal=7;
		}
	else
	{
		RetVal = 100;
	}

	DIO_SetPinValue(R1_PORT,R1_PIN,HIGH);
	DIO_SetPinValue(R2_PORT,R2_PIN,HIGH);
	DIO_SetPinValue(R3_PORT,R3_PIN,LOW);
	DIO_SetPinValue(R4_PORT,R4_PIN,HIGH);

	if(DIO_GetPinValue(C1_PORT,C1_PIN) == (U8)0)
		{
			RetVal=8;
		}
		else if (DIO_GetPinValue(C2_PORT,C2_PIN) == (U8)0)
		{
			RetVal=9;
		}
		else if (DIO_GetPinValue(C3_PORT,C3_PIN) == (U8)0)
		{
			RetVal=10;
		}
		else if (DIO_GetPinValue(C4_PORT,C4_PIN) == (U8)0)
		{
			RetVal=11;
		}
		else
		{
			RetVal=100;
		}

	DIO_SetPinValue(R1_PORT,R1_PIN,HIGH);
	DIO_SetPinValue(R2_PORT,R2_PIN,HIGH);
	DIO_SetPinValue(R3_PORT,R3_PIN,HIGH);
	DIO_SetPinValue(R4_PORT,R4_PIN,LOW);

	if(DIO_GetPinValue(C1_PORT,C1_PIN) == (U8)0)
			{
				RetVal=12;
			}
	else if (DIO_GetPinValue(C2_PORT,C2_PIN) == (U8)0)
			{
				RetVal=13;
			}
	else if (DIO_GetPinValue(C3_PORT,C3_PIN) == (U8)0)
			{
				RetVal=14;
			}
	else if (DIO_GetPinValue(C4_PORT,C4_PIN) == (U8)0)
			{
				RetVal=15;
			}
	else
			{
				RetVal = 100 ;
			}

	return RetVal ;
}
