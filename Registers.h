/*
 * Registers.h
 *
 *  Created on: Aug 30, 2019
 *      Author: hello
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_


#define PORTA (*(volatile U8*)0x3B)
#define DDRA  (*(volatile U8*)0x3A)
#define PINA  (*(volatile U8*)0x39)

#define PORTB (*(volatile U8*)0x38)
#define DDRB  (*(volatile U8*)0x37)
#define PINB  (*(volatile U8*)0x36)

#define PORTC (*(volatile U8*)0x35)
#define DDRC  (*(volatile U8*)0x34)
#define PINC  (*(volatile U8*)0x33)

#define PORTD (*(volatile U8*)0x32)
#define DDRD  (*(volatile U8*)0x31)
#define PIND  (*(volatile U8*)0x30)

#define SFIOR (*(volatile U8*)0x50)



#endif /* REGISTERS_H_ */
