/*
* Keypad.h
*
*  Created on: Sep 6, 2019
*      Author: hello
*/

#ifndef KEYPAD_H_
#define KEYPAD_H_


/*
 * ITS DECIDED THAT THE ROWS are OUTPUT WHILE THE COLOUMS ARE INPUT
 *
 * */
#define UNINIT -100

#define R1_PORT PORT2
#define R2_PORT PORT2
#define R3_PORT PORT2
#define R4_PORT PORT2

#define C1_PORT PORT3
#define C2_PORT PORT3
#define C3_PORT PORT3
#define C4_PORT PORT3

#define R1_PIN PIN0
#define R2_PIN PIN1
#define R3_PIN PIN2
#define R4_PIN PIN3

#define C1_PIN PIN0
#define C2_PIN PIN1
#define C3_PIN PIN2
#define C4_PIN PIN3



void Keypad_Init(void);
U8 Keypad_Scan(void);// Return 0 to 15  or 100 if no scan



#endif /* KEYPAD_H_ */
