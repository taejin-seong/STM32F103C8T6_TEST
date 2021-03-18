################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/hw/driver/i2c.c \
../src/hw/driver/led.c \
../src/hw/driver/motor.c \
../src/hw/driver/mpu9250.c \
../src/hw/driver/nrf24l01.c \
../src/hw/driver/spi.c \
../src/hw/driver/tim.c \
../src/hw/driver/uart.c 

OBJS += \
./src/hw/driver/i2c.o \
./src/hw/driver/led.o \
./src/hw/driver/motor.o \
./src/hw/driver/mpu9250.o \
./src/hw/driver/nrf24l01.o \
./src/hw/driver/spi.o \
./src/hw/driver/tim.o \
./src/hw/driver/uart.o 

C_DEPS += \
./src/hw/driver/i2c.d \
./src/hw/driver/led.d \
./src/hw/driver/motor.d \
./src/hw/driver/mpu9250.d \
./src/hw/driver/nrf24l01.d \
./src/hw/driver/spi.d \
./src/hw/driver/tim.d \
./src/hw/driver/uart.d 


# Each subdirectory must supply rules for building sources it contributes
src/hw/driver/i2c.o: ../src/hw/driver/i2c.c src/hw/driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/ap" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/bsp" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/hw" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/hw/include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/driver/i2c.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/hw/driver/led.o: ../src/hw/driver/led.c src/hw/driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/ap" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/bsp" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/hw" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/hw/include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/driver/led.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/hw/driver/motor.o: ../src/hw/driver/motor.c src/hw/driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/ap" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/bsp" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/hw" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/hw/include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/driver/motor.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/hw/driver/mpu9250.o: ../src/hw/driver/mpu9250.c src/hw/driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/ap" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/bsp" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/hw" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/hw/include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/driver/mpu9250.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/hw/driver/nrf24l01.o: ../src/hw/driver/nrf24l01.c src/hw/driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/ap" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/bsp" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/hw" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/hw/include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/driver/nrf24l01.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/hw/driver/spi.o: ../src/hw/driver/spi.c src/hw/driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/ap" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/bsp" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/hw" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/hw/include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/driver/spi.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/hw/driver/tim.o: ../src/hw/driver/tim.c src/hw/driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/ap" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/bsp" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/hw" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/hw/include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/driver/tim.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/hw/driver/uart.o: ../src/hw/driver/uart.c src/hw/driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/ap" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/bsp" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/hw" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/CMSIS/Include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/lib/cube_fw103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/hw/include" -I"C:/STM32 Coding files/exam_fw103/exam_arm/stm32_f103/src/common/core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/driver/uart.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

