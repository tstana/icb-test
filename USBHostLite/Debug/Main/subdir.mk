################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Main/cr_startup_lpc17.c \
../Main/usbhost_main.c 

OBJS += \
./Main/cr_startup_lpc17.o \
./Main/usbhost_main.o 

C_DEPS += \
./Main/cr_startup_lpc17.d \
./Main/usbhost_main.d 


# Each subdirectory must supply rules for building sources it contributes
Main/%.o: ../Main/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2_LPC17xx -I../../CMSISv2p00_LPC177x_8x/inc -I../Fat -I../Host -I../Include -I../Main -I../MassStorage -I../Uart -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


