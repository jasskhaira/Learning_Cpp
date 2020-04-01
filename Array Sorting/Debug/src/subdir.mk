################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Array\ Sorting.cpp 

OBJS += \
./src/Array\ Sorting.o 

CPP_DEPS += \
./src/Array\ Sorting.d 


# Each subdirectory must supply rules for building sources it contributes
src/Array\ Sorting.o: ../src/Array\ Sorting.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Array Sorting.d" -MT"src/Array\ Sorting.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


