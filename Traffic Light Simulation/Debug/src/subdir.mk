################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Lights.cpp \
../src/Traffic\ Light\ Simulation.cpp 

OBJS += \
./src/Lights.o \
./src/Traffic\ Light\ Simulation.o 

CPP_DEPS += \
./src/Lights.d \
./src/Traffic\ Light\ Simulation.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Traffic\ Light\ Simulation.o: ../src/Traffic\ Light\ Simulation.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Traffic Light Simulation.d" -MT"src/Traffic\ Light\ Simulation.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


