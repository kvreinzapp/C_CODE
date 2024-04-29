myProgram: oneFile.o anotherFile.o
	gcc -o myProgram oneFile.o anotherFile.o
oneFile.o: oneFile.c oneHeader.h someHeader.h
	gcc -std=gnu99 -pedantic -Wall -c oneFile.c
anotherFile.o: anotherFile.c anotherHeader.h someHeader.h
	gcc -std=gnu99 -pedantic -Wall -c anotherFile.c
