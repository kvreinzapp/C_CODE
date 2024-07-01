rotate-matrix: rotate.o read-matrix.o
	gcc -o $@ rotate.o read-matrix.o
rotate.o: rotate.c
	gcc -c -o $@ -pedantic -Wall -std=gnu99 -Werror rotate.c
.PHONY: clean
clean:
	rm -f rotate-matrix *.o
