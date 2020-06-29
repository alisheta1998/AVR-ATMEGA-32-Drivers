/*
 * DIO.h
 *
 *  Created on: Aug 31, 2019
 *      Author: hello
 */

#ifndef DIO_H_
#define DIO_H_

#define PORT0 0
#define PORT1 1
#define PORT2 2
#define PORT3 3

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

#define INPUT  0
#define OUTPUT 1

#define HIGH 1
#define LOW 0


/*
 * Port_number : 0 , 1 , 2 , 3
 * Pin_number : 0 --> 7
 * Direction : 	INPUT --> 0
 * 				OUTPUT --> 1
 *
 * */
void DIO_SetPinDirection	 (U8 Port_number , U8 Pin_number ,U8 Direction);
void DIO_SetPinPullUp   	 (U8 Port_number , U8 Pin_number);
void DIO_SetPinValue 	 	(U8 Port_number , U8 Pin_number,U8 Value);
U8   DIO_GetPinValue 	 	(U8 Port_number , U8 Pin_number);

void DIO_SetPortDirection	 (U8 Port_number ,U8 Direction);
void DIO_SetPortValue		 (U8 Port_number ,U8 Value);



#endif /* DIO_H_ */
