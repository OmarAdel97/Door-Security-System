 /******************************************************************************
 *
 * Module: BUZZER
 *
 * File Name: buzzer.c
 *
 * Description: Source file for the Buzzer driver
 *
 * Author: Omar Adel
 *
 *******************************************************************************/

#include "buzzer.h"
#include "gpio.h"
#include "avr/io.h" /* To use the IO Ports Registers */
#include "common_macros.h" /* To use the macros like SET_BIT */

void BUZZER_Init(void){
	GPIO_setupPinDirection(BUZZER_PORT_ID, BUZZER_PIN_ID, PIN_OUTPUT);
	GPIO_writePin(BUZZER_PORT_ID, BUZZER_PIN_ID, LOGIC_HIGH);
}


void BUZZER_ON(void){
 GPIO_writePin(BUZZER_PORT_ID, BUZZER_PIN_ID, LOGIC_LOW);
}

void BUZZER_OFF(void){
	GPIO_writePin(BUZZER_PORT_ID, BUZZER_PIN_ID, LOGIC_HIGH);
}
