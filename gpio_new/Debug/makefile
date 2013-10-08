################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: gpio_new.axf

# Tool invocations
gpio_new.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:\Users\stanavi\Documents\LPCXpresso_5.2.6_2137\gpio\CMSISv2p00_LPC177x_8x\Debug" -Xlinker -Map="gpio_new.map" -Xlinker --gc-sections -mcpu=cortex-m3 -mthumb -T "gpio_new_Debug.ld" -o "gpio_new.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) gpio_new.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "gpio_new.axf"; # arm-none-eabi-objcopy -O binary "gpio_new.axf" "gpio_new.bin" ; checksum -p LPC1788 -d "gpio_new.bin";
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
