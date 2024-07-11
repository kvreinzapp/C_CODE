CC = gcc
CFLAGS = -pedantic -Wall -std=gnu99 -O3
DBFLAGS = -pedantice -Wall -std=gnu99 -DDEBUG -g
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c, %.o, $(SRCS))
DBGOBJS=$(patsubst $.c, %dbg.o, $(SRCS))

stringToInt: $(OBJS)
	gcc -o $@ -O3 $(OBJS)
stringToInt-debug: $(DBGOBJS)
	gcc -o $@ -ggdb3 $(DBGOBJS)
%.dbg.o: %.c
	gcc $(DBFLAGS) -c -o $@ $<
%.o: %.c
	gcc $(CFLAGS) -c $<

.PHONY: clean all
all: stringToInt stringToInt-debug
clean:
	rm -f stringToInt stringToInt-debug *.o

