CC = gcc
CFLAGS = -std=gnu99 -pedantic -Wall
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))
myProgram: $(OBJS)
	gcc -o myProgram $(OBJS)
.PHONY: clean depend
clean:
	rm -f myProgram *.o *.c~ *.h~ *.bak *.txt
depend:
	makedepend  $(SRCS)
# DO NOT DELETE

anotherFile.o: anotherHeader.h someHeader.h
oneFile.o: oneHeader.h someHeader.h
