CC = gcc
CFLAGS = -pedantic -Wall -std=gnu99 
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))
test: $(OBJS)
	$(CC) -o $@ $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean: 
	rm -f test $(OBJS)
