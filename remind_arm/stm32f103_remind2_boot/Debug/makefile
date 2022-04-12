################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/lib/cube_remind_f103/USB_DEVICE/Target/subdir.mk
-include src/lib/cube_remind_f103/USB_DEVICE/App/subdir.mk
-include src/lib/cube_remind_f103/Middlewares/ST/STM32_USB_Device_Library/Core/Src/subdir.mk
-include src/lib/cube_remind_f103/Middlewares/ST/STM32_USB_Device_Library/Class/DFU/Src/subdir.mk
-include src/lib/cube_remind_f103/Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include src/hw/driver/subdir.mk
-include src/hw/subdir.mk
-include src/common/core/subdir.mk
-include src/bsp/startup/subdir.mk
-include src/bsp/subdir.mk
-include src/ap/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := stm32f103_remind2_boot
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
stm32f103_remind2_boot.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
stm32f103_remind2_boot.list \

OBJCOPY_HEX += \
stm32f103_remind2_boot.hex \

OBJCOPY_BIN += \
stm32f103_remind2_boot.bin \


# All Target
all: main-build

# Main-build Target
main-build: stm32f103_remind2_boot.elf secondary-outputs

# Tool invocations
stm32f103_remind2_boot.elf: $(OBJS) $(USER_OBJS) C:\STM32\ Coding\ files\remind_fw103\remind_arm\stm32f103_remind2_boot\src\bsp\ldscript\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "stm32f103_remind2_boot.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\STM32 Coding files\remind_fw103\remind_arm\stm32f103_remind2_boot\src\bsp\ldscript\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="stm32f103_remind2_boot.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

stm32f103_remind2_boot.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "stm32f103_remind2_boot.list"
	@echo 'Finished building: $@'
	@echo ' '

stm32f103_remind2_boot.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "stm32f103_remind2_boot.hex"
	@echo 'Finished building: $@'
	@echo ' '

stm32f103_remind2_boot.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "stm32f103_remind2_boot.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
