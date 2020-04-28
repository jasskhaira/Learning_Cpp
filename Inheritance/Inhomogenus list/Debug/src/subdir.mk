################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cell.cpp \
../src/InhomList.cpp \
../src/Inhomogenus\ list.cpp 

OBJS += \
./src/Cell.o \
./src/InhomList.o \
./src/Inhomogenus\ list.o 

CPP_DEPS += \
./src/Cell.d \
./src/InhomList.d \
./src/Inhomogenus\ list.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Inhomogenus\ list.o: ../src/Inhomogenus\ list.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Inhomogenus list.d" -MT"src/Inhomogenus\ list.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


