################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/common/core/qbuffer.c 

OBJS += \
./src/common/core/qbuffer.o 

C_DEPS += \
./src/common/core/qbuffer.d 


# Each subdirectory must supply rules for building sources it contributes
src/common/core/qbuffer.o: ../src/common/core/qbuffer.c src/common/core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/ap" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/bsp" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/hw" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/hw/include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/common/core/qbuffer.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

