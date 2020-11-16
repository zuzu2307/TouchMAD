################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STM32746G-Discovery/stm32746g_discovery.c \
../STM32746G-Discovery/stm32746g_discovery_ts.c 

C_DEPS += \
./STM32746G-Discovery/stm32746g_discovery.d \
./STM32746G-Discovery/stm32746g_discovery_ts.d 

OBJS += \
./STM32746G-Discovery/stm32746g_discovery.o \
./STM32746G-Discovery/stm32746g_discovery_ts.o 


# Each subdirectory must supply rules for building sources it contributes
STM32746G-Discovery/stm32746g_discovery.o: ../STM32746G-Discovery/stm32746g_discovery.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/gui/include -I"D:/Downloads/MAD/Touch_GFX_projects/Test_IDE/Components/Common" -I"D:/Downloads/MAD/Touch_GFX_projects/Test_IDE/Components/ft5336" -I"D:/Downloads/MAD/Touch_GFX_projects/Test_IDE/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
STM32746G-Discovery/stm32746g_discovery_ts.o: ../STM32746G-Discovery/stm32746g_discovery_ts.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/gui/include -I"D:/Downloads/MAD/Touch_GFX_projects/Test_IDE/Components/Common" -I"D:/Downloads/MAD/Touch_GFX_projects/Test_IDE/Components/ft5336" -I"D:/Downloads/MAD/Touch_GFX_projects/Test_IDE/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery_ts.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

