################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ch14\ ex2.cpp \
../src/Date.cpp 

OBJS += \
./src/Ch14\ ex2.o \
./src/Date.o 

CPP_DEPS += \
./src/Ch14\ ex2.d \
./src/Date.d 


# Each subdirectory must supply rules for building sources it contributes
src/Ch14\ ex2.o: ../src/Ch14\ ex2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Ch14 ex2.d" -MT"src/Ch14\ ex2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


