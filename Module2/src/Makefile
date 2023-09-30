#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# Makefile used to automate build and produce intermediate files
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      build -> Generates final object file
#      clean -> Removes all Makefile generated files other than source code
#      compile-all -> Object files for all .c files that have not been linked
#      file.i -> Generates preprocessed files
#      file.asm -> Generates assembly code
#      file.o -> Generates unlinked object files
#
# Platform Overrides:
#      The build supports two platforms namely Linux and msp432
#      The makefile targets default Linux if HOST is specified as a flag
#      The makefile targets cross-compilation if MSP432 is specified as a flag
#
# Author : Vikas G N
# Date : 24/09/2023
#------------------------------------------------------------------------------
include sources.mk

# General Flags
GEN_FLAGS = -Wall -Werror -g -O0 -std=c99

# Target Executable
TARGET = c1m2

# Platform Overrides
PLATFORM = HOST

ifeq ($(PLATFORM), MSP432)
	# Architectures Specific Flags
	LINKER_FILE = -T mps432p401r.lds
	CPU = cortex-m4
	ARCH = armv7e-m
	SPECS = nosys.specs
	ADDITIONAL = -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16
	
	# Compiler Flags and Defines
	CC = arm-none-eabi-gcc
	LD = arm-none-eabi-ld
	CFLAGS = $(GEN_FLAGS) $(ADDITIONAL) -mcpu=$(CPU) -march=$(ARCH) --specs=$(SPECS)
	LDFLAGS = -Wl,-Map=$(TARGET).map -T -L ../ $(LINKER_FILE)
	CPPFLAGS = -DMSP432 $(INCLUDES)
	
	# Architecture specific source code
	SOURCE = main.c memory.c interrupts_msp432p401r_gcc.c startup_msp432p401r_gcc.c system_msp432p401r.c
	SIZE = arm-none-eabi-size

else
	# Complier Flags and Defines
	CC = gcc
	CFLAGS = $(GEN_FLAGS)
	CPPFLAGS = -DHOST $(INCLUDES)
	LDFLAGS = -Wl,-Map=$(TARGET).map
	SIZE = size
endif

OBJ = $(SRCS:.c=.o)
DEP = $(SRCS:.c=.d)
ASM = $(SRCS:.c=.asm)
PRE = $(SRCS:.c=.i)

%.o: %.c
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $@

%.asm: %.c
	$(CC) -S $< $(CFLAGS) $(CPPFLAGS) -o $@

%.i: %.c
	$(CC) -E $< $(CPPFLAGS) -o $@

%.d: %.c
	$(CC) -E -M $< $(CPPFLAGS) -o $@

.PHONY: compile-all
compile-all: $(OBJ)

.PHONY: Build
build: $(TARGET).out

$(TARGET).out: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@
	$(SIZE) $@

.PHONY: Clean
clean:
	rm -f $(OBJ) $(DEP) $(ASM) $(PRE) $(TARGET).out $(TARGET).map
