################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Compiler'
	"C:/Users/José Pablo Martínez/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/4.8.4-20140725/bin/arm-none-eabi-gcc.exe" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -D__MSP432P401R__ -DTARGET_IS_FALCON -Dgcc -I"C:/ti/ccsv7/ccs_base/arm/include" -I"C:/ti/ccsv7/ccs_base/arm/include/CMSIS" -I"C:/Users/José Pablo Martínez/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/4.8.4-20140725/arm-none-eabi/include" -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o"$@" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


