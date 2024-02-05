 /******************************************************************************
 *
 * Module: MOTOR
 *
 * File Name: motor.h
 *
 * Description: Header file for the MOTOR driver
 *
 * Author: Omar Adel
 *
 *******************************************************************************/

#ifndef MOTOR_H_
#define MOTOR_H_
#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define MOTOR_PORT_ID PORTC_ID
#define MOTOR_FIRST_PIN_ID PIN5_ID
#define MOTOR_SECOND_PIN_ID PIN6_ID
#define MOTOR_SPEED_PIN_ID PIN7_ID


/*******************************************************************************
 *                         Types Declaration                                   *
 *******************************************************************************/
enum DcMotor_State{
	stop,clockwise,antiClockwise
}state;

extern enum DcMotor_State state;

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void DcMotor_init(void);
void DcMotor_Rotate(enum DcMotor_State currentState);
//void PWM_INIT(uint8 speed);

#endif /* MOTOR_H_ */
