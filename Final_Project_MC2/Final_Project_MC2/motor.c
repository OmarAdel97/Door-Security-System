 /******************************************************************************
 *
 * Module: MOTOR
 *
 * File Name: motor.c
 *
 * Description: Source file for the MOTOR driver
 *
 * Author: Omar Adel
 *
 *******************************************************************************/
#include "motor.h"
#include "gpio.h"
#include "avr/io.h" /* To use the IO Ports Registers */
#include "common_macros.h" /* To use the macros like SET_BIT */
#include "timer.h"
#include "util/delay.h"

 uint8 g_edgeCount = 0;
/*void PWM_INIT(uint8 speed){
	uint8 dutyCycle;
	switch(speed){
	case 25: dutyCycle = 64; break;
	case 50: dutyCycle = 128; break;
	case 75: dutyCycle = 192; break;
	case 100: dutyCycle = 255; break;
	default : dutyCycle = 0; break;
	}
	TCCR0 = (1<<WGM00) | (1<<WGM01)| (1<<COM01)| (1<<CS01);
	TCNT0 = 0;
	OCR0 = dutyCycle;
	GPIO_setupPinDirection(PORTB_ID, PIN3_ID, PIN_OUTPUT);

}*/
void DcMotor_init(void){
	GPIO_setupPinDirection(MOTOR_PORT_ID, MOTOR_FIRST_PIN_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(MOTOR_PORT_ID, MOTOR_SECOND_PIN_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(MOTOR_PORT_ID, MOTOR_SPEED_PIN_ID, PIN_OUTPUT);
	GPIO_writePin(MOTOR_PORT_ID, MOTOR_FIRST_PIN_ID, LOGIC_LOW);
	GPIO_writePin(MOTOR_PORT_ID, MOTOR_SECOND_PIN_ID, LOGIC_LOW);
	state = stop;
}

void DcMotor_Rotate(enum DcMotor_State currentState){
	state = currentState;
	switch(currentState){
	case stop:GPIO_writePin(MOTOR_PORT_ID, MOTOR_FIRST_PIN_ID, LOGIC_LOW);
			  GPIO_writePin(MOTOR_PORT_ID, MOTOR_SECOND_PIN_ID, LOGIC_LOW);
			  GPIO_writePin(MOTOR_PORT_ID, MOTOR_SPEED_PIN_ID, LOGIC_LOW);
			  break;

	case clockwise:GPIO_writePin(MOTOR_PORT_ID, MOTOR_FIRST_PIN_ID, LOGIC_LOW);
				   GPIO_writePin(MOTOR_PORT_ID, MOTOR_SECOND_PIN_ID, LOGIC_HIGH);
				   GPIO_writePin(MOTOR_PORT_ID, MOTOR_SPEED_PIN_ID, LOGIC_HIGH);
				   break;

	case antiClockwise:GPIO_writePin(MOTOR_PORT_ID, MOTOR_FIRST_PIN_ID, LOGIC_HIGH);
					   GPIO_writePin(MOTOR_PORT_ID, MOTOR_SECOND_PIN_ID, LOGIC_LOW);
					   GPIO_writePin(MOTOR_PORT_ID, MOTOR_SPEED_PIN_ID, LOGIC_HIGH);
					   break;
	default: break;
	}

/*#if(currentState == stop)
	GPIO_writePin(PORTB_ID, PIN0_ID, LOGIC_LOW);
	GPIO_writePin(PORTB_ID, PIN1_ID, LOGIC_LOW);
#elif(currentState == antiClockwise)
	GPIO_writePin(PORTB_ID, PIN0_ID, LOGIC_HIGH);
	GPIO_writePin(PORTB_ID, PIN1_ID, LOGIC_LOW);

#elif(currentState == clockwise)
	GPIO_writePin(PORTB_ID, PIN0_ID, LOGIC_LOW);
	GPIO_writePin(PORTB_ID, PIN1_ID, LOGIC_HIGH);
#endif*/

//PWM_INIT(speed);
}

/*void MOTOR_DONE(void){
	g_edgeCount++;
			if(g_edgeCount == 15)
			{
	TIMER_DeInit(TIMER_1);
	 g_edgeCount = 0;
			}
}*/
