# Compiler settings
CC = gcc
CFLAGS = -Wall -g

# Find all .c files and create list of executables
SOURCES = $(wildcard ex*.c)
EXECUTABLES = $(SOURCES:.c=)

# Default target
all: $(EXECUTABLES)

# Pattern rule for building executables
%: %.c
    $(CC) $(CFLAGS) $< -o $@

# Clean target
clean:
    rm -f $(EXECUTABLES) *.o