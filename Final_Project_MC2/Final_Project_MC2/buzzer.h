 /******************************************************************************
 *
 * Module: BUZZER
 *
 * File Name: buzzer.h
 *
 * Description: Header file for the Buzzer driver
 *
 * Author: Omar Adel
 *
 *******************************************************************************/

#ifndef BUZZER_H_
#define BUZZER_H_
#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define BUZZER_PORT_ID PORTD_ID
#define BUZZER_PIN_ID PIN7_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void BUZZER_Init(void);
void BUZZER_ON(void);
void BUZZER_OFF(void);

#endif /* BUZZER_H_ */
