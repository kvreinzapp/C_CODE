CC = gcc
CFLAGS = -pedantic -Wall -std=gnu99 -O3
DBGFLAGS = -pedantic -Wall -std=gnu99 -ggdb -DDEBUG
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))
DBGOBJS = $(patsubst %.c, %.bug.o, $(SRCS))

test: $(OBJS)
	gcc -o $@ -O3 $(OBJS)
test-bug: $(DBGOBJS)
	gcc -o $@ -ggdb3 $(DBGOBJS)

%.bug.o: %.c
	gcc $(DBGFLAGS) -o $@ -c $<

.PHONY: clean all
all : test test-bug
clean:
	rm -f test test-bug *.o	


