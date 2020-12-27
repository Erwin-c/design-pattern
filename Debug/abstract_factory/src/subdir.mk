################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../abstract_factory/src/abstract_factory.cc \
../abstract_factory/src/blue.cc \
../abstract_factory/src/color.cc \
../abstract_factory/src/color_factory.cc \
../abstract_factory/src/facroty_producer.cc \
../abstract_factory/src/green.cc \
../abstract_factory/src/red.cc 

CC_DEPS += \
./abstract_factory/src/abstract_factory.d \
./abstract_factory/src/blue.d \
./abstract_factory/src/color.d \
./abstract_factory/src/color_factory.d \
./abstract_factory/src/facroty_producer.d \
./abstract_factory/src/green.d \
./abstract_factory/src/red.d 

OBJS += \
./abstract_factory/src/abstract_factory.o \
./abstract_factory/src/blue.o \
./abstract_factory/src/color.o \
./abstract_factory/src/color_factory.o \
./abstract_factory/src/facroty_producer.o \
./abstract_factory/src/green.o \
./abstract_factory/src/red.o 


# Each subdirectory must supply rules for building sources it contributes
abstract_factory/src/%.o: ../abstract_factory/src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DABSTRACT_FACTORY_ENV_ -I"/home/erwin/Workspace/eclipse-workspace/design_pattern/abstract_factory/inc" -I"/home/erwin/Workspace/eclipse-workspace/design_pattern/factory_method/inc" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


