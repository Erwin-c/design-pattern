################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../factory_method/src/circle.cc \
../factory_method/src/rectangle.cc \
../factory_method/src/shape.cc \
../factory_method/src/shape_factory.cc \
../factory_method/src/square.cc 

CC_DEPS += \
./factory_method/src/circle.d \
./factory_method/src/rectangle.d \
./factory_method/src/shape.d \
./factory_method/src/shape_factory.d \
./factory_method/src/square.d 

OBJS += \
./factory_method/src/circle.o \
./factory_method/src/rectangle.o \
./factory_method/src/shape.o \
./factory_method/src/shape_factory.o \
./factory_method/src/square.o 


# Each subdirectory must supply rules for building sources it contributes
factory_method/src/%.o: ../factory_method/src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DABSTRACT_FACTORY_ENV_ -I"/home/erwin/Workspace/eclipse-workspace/design_pattern/abstract_factory/inc" -I"/home/erwin/Workspace/eclipse-workspace/design_pattern/factory_method/inc" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


