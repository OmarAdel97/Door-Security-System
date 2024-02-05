 /******************************************************************************
 *
 * Module: Timer
 *
 * File Name: timer.h
 *
 * Description: Header file for the AVR Timer driver
 *
 * Author: Omar Adel
 *
 *******************************************************************************/
#ifndef TIMER_H_
#define TIMER_H_

#include "std_types.h"
/*******************************************************************************
 *                         Types Declaration                                   *
 *******************************************************************************/

typedef enum
{
	NORMAL,COMPARE
}TIMER_Mode;

typedef enum
{
	INIT_0 = 0, INIT_64 = 64, INIT_128 = 128, INIT_192 = 192, INIT_254 = 254
}TIMER_InitialValue;


typedef enum
{
	NO_CLOCK,F_CPU_CLOCK,F_CPU_8,F_CPU_64,F_CPU_256,F_CPU_1024
}TIMER_Prescaler;

typedef enum{
	TIMER_0,TIMER_1,TIMER_2
}Timer_Number;

typedef struct
{
	TIMER_Mode timerMode;
	TIMER_InitialValue initialValue;
	uint32 compareValue;
	TIMER_Prescaler prescaler;


}TIMER_ConfigType;


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

void TIMER_Init(const TIMER_ConfigType * Config_Ptr , Timer_Number timer);

void TIMER_setCallBack(void(*a_ptr)(void));

void TIMER_DeInit(Timer_Number timer);

#endif /* TIMER_H_ */
