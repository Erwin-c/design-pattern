################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../factory_method/factory_method_test.cc 

CC_DEPS += \
./factory_method/factory_method_test.d 

OBJS += \
./factory_method/factory_method_test.o 


# Each subdirectory must supply rules for building sources it contributes
factory_method/%.o: ../factory_method/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DABSTRACT_FACTORY_ENV_ -I"/home/erwin/Workspace/eclipse-workspace/design_pattern/abstract_factory/inc" -I"/home/erwin/Workspace/eclipse-workspace/design_pattern/factory_method/inc" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


