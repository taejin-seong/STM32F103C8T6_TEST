################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c 

OBJS += \
./src/main.o 

C_DEPS += \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/main.o: ../src/main.c src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -DUSER_VECT_TAB_ADDRESS -c -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/ap" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/bsp" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/common" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/hw" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib/cube_remind_f103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib/cube_remind_f103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib/cube_remind_f103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/common/hw/include" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib/cube_remind_f103/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib/cube_remind_f103/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib/cube_remind_f103/USB_DEVICE/App" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib/cube_remind_f103/USB_DEVICE/Target" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/common/core" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib/FreeRTOS/Source/include" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind/src/lib/FreeRTOS/Source/portable/GCC/ARM_CM3" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/main.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

