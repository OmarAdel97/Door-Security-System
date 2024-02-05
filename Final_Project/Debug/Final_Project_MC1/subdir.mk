################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Final_Project_MC1/gpio.c \
../Final_Project_MC1/keypad.c \
../Final_Project_MC1/lcd.c \
../Final_Project_MC1/mc1.c \
../Final_Project_MC1/uart.c 

OBJS += \
./Final_Project_MC1/gpio.o \
./Final_Project_MC1/keypad.o \
./Final_Project_MC1/lcd.o \
./Final_Project_MC1/mc1.o \
./Final_Project_MC1/uart.o 

C_DEPS += \
./Final_Project_MC1/gpio.d \
./Final_Project_MC1/keypad.d \
./Final_Project_MC1/lcd.d \
./Final_Project_MC1/mc1.d \
./Final_Project_MC1/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Final_Project_MC1/%.o: ../Final_Project_MC1/%.c Final_Project_MC1/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


