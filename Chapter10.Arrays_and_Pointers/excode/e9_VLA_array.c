/*
Write a program that initializes a two-dimensional 3×5 array-of-double and uses a VLA-
based function to copy it to a second two-dimensional array. Also provide a VLA-based
function to display the contents of the two arrays. The two functions should be capable,
in general, of processing arbitrary N×M arrays. (If you don’t have access to a VLA-capable
compiler, use the traditional C approach of functions that can process an N×5 array).
*/
#include <stdio.h>
#include "Chapter10.h"

#define ROWS 3
#define COLS 5

int main(void)
{
    int rs = 3;
    int cs = 5;

    double source[ROWS][COLS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    show_VLA_2D(ROWS, COLS, source);

    double target[rs][cs]; // VLA
    for (int i = 0; i < rs; i++)
        for (int j = 0; j < cs; j++)
            target[i][j] = i * j + j;

    show_VLA_2D(ROWS, COLS, target);

    copy_VLA_2D(ROWS, COLS, target, source);
    show_VLA_2D(ROWS, COLS, target);

    return 0;
}