################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Code/src/displayTensor.c \
../Code/src/generateTensors.c \
../Code/src/multiplyTensors.c \
../Code/src/sumResults.c \
../Code/src/transposeTensor.c 

OBJS += \
./Code/src/displayTensor.o \
./Code/src/generateTensors.o \
./Code/src/multiplyTensors.o \
./Code/src/sumResults.o \
./Code/src/transposeTensor.o 

C_DEPS += \
./Code/src/displayTensor.d \
./Code/src/generateTensors.d \
./Code/src/multiplyTensors.d \
./Code/src/sumResults.d \
./Code/src/transposeTensor.d 


# Each subdirectory must supply rules for building sources it contributes
Code/src/%.o: ../Code/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


