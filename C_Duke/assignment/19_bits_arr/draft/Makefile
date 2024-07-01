numToBits: numToBits.c
	gcc -o numToBits -pedantic -std=gnu99 -Wall -Werror numToBits.c
numTobits_dbug: numToBits.c
	gcc -o $@ numToBits.c -g
.PHONY: clean all
all: numToBits numTobits_dbug
clean: 
	rm -rf numToBits numTobits_dbug  numTobits_dbug.dSYM *.o


