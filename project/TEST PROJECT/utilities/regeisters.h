﻿/*
 * regeisters.h
 *
 * Created: 07/11/2022 09:47:08 
 *  Author: MH7B
 */ 


#ifndef REGEISTERS_H_
#define REGEISTERS_H_

typedef unsigned char uint8_t;
//#include "types.h"
//DIO registers
///////////////////////////////////////////////////
/*PORTA	 */
#define PORTA *((volatile uint8_t*)	0x3B)
#define DDRA  *((volatile uint8_t*)	0x3A)
#define PINA  *((volatile uint8_t*)	0x39)
/*PORTB	 */
#define PORTB *((volatile uint8_t*) 0x38)
#define DDRB  *((volatile uint8_t*)	0x37)
#define PINB  *((volatile uint8_t*)	0x36)
/*PORTC	 */
#define PORTC *((volatile uint8_t*)	0x35)
#define DDRC  *((volatile uint8_t*)	0x34)
#define PINC  *((volatile uint8_t*)	0x33)
//PORTD registers
#define PORTD *((volatile uint8_t*) 0x32)
#define DDRD  *((volatile uint8_t*)	0x31)
#define PIND  *((volatile uint8_t*)	0x30)
//**********************************************************************//
/*timer Registers*/
 //**********************************************************************//

//Timer0 registers
 #define TIFR  *((volatile uint8_t*) 0x58)
 #define TCCR0 *((volatile uint8_t*) 0x53)
 #define TCNT0 *((volatile uint8_t*) 0x52)

 //**********************************************************************//
 /*Interrupt Registers*/
 //**********************************************************************//
 
#define SREG   *((volatile uint8_t*) 0x5F)
#define GICR   *((volatile uint8_t*) 0x5B)
#define MCUCR  *((volatile uint8_t*) 0x55)
#define MCUCSR *((volatile uint8_t*) 0x54)
//**********************************************************************//
/*ADC Registers*/
//**********************************************************************//
#define SFIOR   *((volatile uint8_t*) 0x50)
#define ADMUX   *((volatile uint8_t*) 0x27)
#define ADCSRA  *((volatile uint8_t*) 0x26)
#define ADCH    *((volatile uint8_t*) 0x25)
#define ADCL    *((volatile uint8_t*) 0x24)
 #endif
 