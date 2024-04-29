CC = gcc
CFLAGS = -std=gnu99 -pedantic -Wall -O3
DBGFLAGS = -std=gnu99 -pedantic -Wall -ggdb3 -DDEBUG
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))
DBGOBJS = $(patsubst %.c, %.dbg.o, $(SRCS))
myProgram: $(OBJS)
	gcc -o $@ -O3 $(OBJS)
myProgram-debug: $(DBGOBJS)
	gcc -o $@ -ggdb3 $(DBGOBJS)
%.dbg.o: %.c
	gcc $(DBGFLAGS) -c -o $@ $<
.PHONY: clean depend all 
clean:
	rm -f myProgram myProgram-debug *.o *.c~ *.h~ *.bak *.txt
depend:
	makedepend  $(SRCS)
	makedepend -a -o .dbg.o $(SRCS)
all: myProgram myProgram-debug
# DO NOT DELETE

anotherFile.o: anotherHeader.h someHeader.h
oneFile.o: oneHeader.h someHeader.h
