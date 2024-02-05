################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Final_Project_MC2/buzzer.c \
../Final_Project_MC2/external_eeprom.c \
../Final_Project_MC2/gpio.c \
../Final_Project_MC2/mc2.c \
../Final_Project_MC2/motor.c \
../Final_Project_MC2/timer.c \
../Final_Project_MC2/twi.c \
../Final_Project_MC2/uart.c 

OBJS += \
./Final_Project_MC2/buzzer.o \
./Final_Project_MC2/external_eeprom.o \
./Final_Project_MC2/gpio.o \
./Final_Project_MC2/mc2.o \
./Final_Project_MC2/motor.o \
./Final_Project_MC2/timer.o \
./Final_Project_MC2/twi.o \
./Final_Project_MC2/uart.o 

C_DEPS += \
./Final_Project_MC2/buzzer.d \
./Final_Project_MC2/external_eeprom.d \
./Final_Project_MC2/gpio.d \
./Final_Project_MC2/mc2.d \
./Final_Project_MC2/motor.d \
./Final_Project_MC2/timer.d \
./Final_Project_MC2/twi.d \
./Final_Project_MC2/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Final_Project_MC2/%.o: ../Final_Project_MC2/%.c Final_Project_MC2/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


