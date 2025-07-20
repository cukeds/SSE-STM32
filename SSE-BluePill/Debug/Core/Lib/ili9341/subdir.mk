################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Lib/ili9341/fonts.c \
../Core/Lib/ili9341/ili9341.c \
../Core/Lib/ili9341/ili9341_touch.c 

C_DEPS += \
./Core/Lib/ili9341/fonts.d \
./Core/Lib/ili9341/ili9341.d \
./Core/Lib/ili9341/ili9341_touch.d 

OBJS += \
./Core/Lib/ili9341/fonts.o \
./Core/Lib/ili9341/ili9341.o \
./Core/Lib/ili9341/ili9341_touch.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Lib/ili9341/%.o Core/Lib/ili9341/%.su Core/Lib/ili9341/%.cyclo: ../Core/Lib/ili9341/%.c Core/Lib/ili9341/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu18 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../../Common/Inc -I"C:/Users/Juan/STM32CubeIDE/workspace_1.16.0/SSE-BluePill/Core/app" -I"C:/Users/Juan/STM32CubeIDE/workspace_1.16.0/SSE-BluePill/Core/Lib/ili9341" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Lib-2f-ili9341

clean-Core-2f-Lib-2f-ili9341:
	-$(RM) ./Core/Lib/ili9341/fonts.cyclo ./Core/Lib/ili9341/fonts.d ./Core/Lib/ili9341/fonts.o ./Core/Lib/ili9341/fonts.su ./Core/Lib/ili9341/ili9341.cyclo ./Core/Lib/ili9341/ili9341.d ./Core/Lib/ili9341/ili9341.o ./Core/Lib/ili9341/ili9341.su ./Core/Lib/ili9341/ili9341_touch.cyclo ./Core/Lib/ili9341/ili9341_touch.d ./Core/Lib/ili9341/ili9341_touch.o ./Core/Lib/ili9341/ili9341_touch.su

.PHONY: clean-Core-2f-Lib-2f-ili9341

