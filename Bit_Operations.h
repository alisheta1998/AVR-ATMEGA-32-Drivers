/*
 * Bit_Operations.h
 *
 *  Created on: Aug 31, 2019
 *      Author: hello
 */

#ifndef BIT_OPERATIONS_H_
#define BIT_OPERATIONS_H_

#define SETBIT(X,BIT)    (X|=((unsigned char)1<<BIT))
#define CLRBIT(X,BIT)    (X&=~(unsigned char)(1<<BIT))
#define TOGGLEBIT(X,BIT) (X^=(unsigned char)(1<<BIT))
#define GETBIT(X,BIT)    ((X>>BIT)&(unsigned char)1)

#endif /* BIT_OPERATIONS_H_ */
