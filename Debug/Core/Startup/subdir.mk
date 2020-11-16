################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32f746nghx.s 

S_DEPS += \
./Core/Startup/startup_stm32f746nghx.d 

OBJS += \
./Core/Startup/startup_stm32f746nghx.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/startup_stm32f746nghx.o: ../Core/Startup/startup_stm32f746nghx.s
	arm-none-eabi-gcc -mcpu=cortex-m7 -g3 -c -I"D:/Downloads/MAD/Touch_GFX_projects/Test_IDE/Components/Common" -I"D:/Downloads/MAD/Touch_GFX_projects/Test_IDE/Components/ft5336" -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/gui/include -I"D:/Downloads/MAD/Touch_GFX_projects/Test_IDE/STM32746G-Discovery" -x assembler-with-cpp -MMD -MP -MF"Core/Startup/startup_stm32f746nghx.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

