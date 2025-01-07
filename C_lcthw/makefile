# Compiler settings
CC = gcc
CFLAGS = -Wall -g

# Find all .c files and create list of executables
SOURCES = $(wildcard *.c)
EXECUTABLES = $(SOURCES:.c=)

# Default target
all: $(EXECUTABLES)

# Pattern rule for building executables
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Clean target
clean:
	rm -rf $(EXECUTABLES) *.o *dSYM
