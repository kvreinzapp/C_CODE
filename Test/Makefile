
all: int 1DArray 2DArray struct test

clean:
	rm -f int 1DArray 2DArray struct

int: int.c
	gcc -o int int.c -Wall

1DArray: 1D_Array.c
	gcc -o 1DArray 1D_Array.c -Wall

2DArray: 2D_Array.c
	gcc -o 2DArray 2D_Array.c -Wall

struct: struct_alignment.c
	gcc -o struct struct_alignment.c -Wall

test: test.c
	gcc -o test test.c -Wall
