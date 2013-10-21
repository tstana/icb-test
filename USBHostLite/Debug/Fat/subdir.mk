################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Fat/usbhost_fat.c 

OBJS += \
./Fat/usbhost_fat.o 

C_DEPS += \
./Fat/usbhost_fat.d 


# Each subdirectory must supply rules for building sources it contributes
Fat/%.o: ../Fat/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DDEBUG -D__CODE_RED -D__USE_CMSIS=CMSISv2_LPC17xx -I../../CMSISv2p00_LPC177x_8x/inc -I../Fat -I../Host -I../Include -I../Main -I../MassStorage -I../Uart -O0 -g3 -Wall -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


