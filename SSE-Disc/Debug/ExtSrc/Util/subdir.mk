################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Juan/STM32CubeIDE/workspace_1.16.0/Common/Util/Util.c 

C_DEPS += \
./ExtSrc/Util/Util.d 

OBJS += \
./ExtSrc/Util/Util.o 


# Each subdirectory must supply rules for building sources it contributes
ExtSrc/Util/Util.o: C:/Users/Juan/STM32CubeIDE/workspace_1.16.0/Common/Util/Util.c ExtSrc/Util/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../../Common -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-ExtSrc-2f-Util

clean-ExtSrc-2f-Util:
	-$(RM) ./ExtSrc/Util/Util.cyclo ./ExtSrc/Util/Util.d ./ExtSrc/Util/Util.o ./ExtSrc/Util/Util.su

.PHONY: clean-ExtSrc-2f-Util

