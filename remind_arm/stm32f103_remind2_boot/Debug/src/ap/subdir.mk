################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ap/ap.c 

OBJS += \
./src/ap/ap.o 

C_DEPS += \
./src/ap/ap.d 


# Each subdirectory must supply rules for building sources it contributes
src/ap/ap.o: ../src/ap/ap.c src/ap/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/ap" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/bsp" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/common" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/hw" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/lib" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/lib/cube_remind_f103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/lib/cube_remind_f103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/lib/cube_remind_f103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/common/hw/include" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/lib/cube_remind_f103/Middlewares/ST/STM32_USB_Device_Library/Class/DFU/Inc" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/lib/cube_remind_f103/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/lib/cube_remind_f103/USB_DEVICE/App" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/lib/cube_remind_f103/USB_DEVICE/Target" -I"C:/STM32 Coding files/remind_fw103/remind_arm/stm32f103_remind2_boot/src/common/core" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/ap/ap.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

