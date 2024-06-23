CC = gcc
CFLAGS = -pedantic -Wall -std=gnu99 -O3
DBFLAGS = -pedantic -Wall -std=gnu99 -ddgb3 -DDEBUG -g
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c, %.o, $(SRCS))
DBGOBJS = $(patsubst %.c, %.dbg.o, $(SRCS))
test-subseq: $(OBJS)
	gcc -o $@ -O3 $(OBJS)
test-subseq-debug: $(DBGOBJS)
	gcc -o $@ -ggdb3 $(DBGOBJS)
%.dbg.o: %.c
	gcc $(DBFLAGS) -c -o $@ $<
%.o: %.c
	gcc $(CFLAGS) -c $<

.PHONY: clean all
all: test-subseq test-subseq-debug
clean: 
	rm -f test-subseq test-subseq-debug *.o
