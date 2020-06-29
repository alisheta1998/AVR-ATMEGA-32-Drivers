/*
 * SevenSeg.h
 *
 *  Created on: Sep 6, 2019
 *      Author: hello
 */
/*
 *
 * Code must be commented
 *
 * */
#ifndef SEVENSEG_H_
#define SEVENSEG_H_

/*
 * Define the ports and pins of the 7 segment
 *
 * */
#define UNINIT -100

#define PORT_a 	PORT0
#define PORT_b 	PORT0
#define PORT_c 	PORT0
#define PORT_d 	PORT0
#define PORT_e 	PORT0
#define PORT_f 	PORT0
#define PORT_g 	PORT0
#define PORT_dp PORT0
#define PIN_a 	PIN0
#define PIN_b 	PIN1
#define PIN_c 	PIN2
#define PIN_d 	PIN3
#define PIN_e 	PIN4
#define PIN_f 	PIN5
#define PIN_g 	PIN6
#define PIN_dp 	PIN7





void SevenSeg_Init(void);
void SevenSeg_Display(S8);

#endif /* SEVENSEG_H_ */

