################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../startup/startup_stm32l476xx.S 

OBJS += \
./startup/startup_stm32l476xx.o 

S_UPPER_DEPS += \
./startup/startup_stm32l476xx.d 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo %cd%
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32L476VGTx -DSTM32L4 -DSTM32L476G_DISCO -DSTM32 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L476xx -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib" -I"D:/work/projects/eclipse_projects/STM32L476G-Disco/inc" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/CMSIS/core" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/CMSIS/device" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/HAL_Driver/Inc/Legacy" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/HAL_Driver/Inc" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/Common" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/cs43l22" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/hx8347g" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/l3gd20" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/lsm303c" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/lsm303dlhc" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/mfxstm32l152" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/n25q128a" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/n25q256a" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/st7735" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/stmpe1600" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/stmpe811" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/Components/wm8994" -I"D:/work/projects/eclipse_projects/stm32l476g-disco_hal_lib/Utilities/STM32L476G-Discovery" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


