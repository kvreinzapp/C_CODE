CC = gcc
CFLAGS = -pedantic -Wall -std=gnu99
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))

test: $(OBJS)
	gcc -o $@ $(OBJS)

.PHONY: all clean
all: test test-bug
clean:
	rm -f test test-bug *.o

