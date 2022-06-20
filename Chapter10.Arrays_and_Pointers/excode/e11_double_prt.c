/*Write a program that declares a 3×5 array of  int and initializes it to some
values of your choice. Have the program print the values, double all the values,
and then display the new values. Write a function to do the displaying and a
second function to do the doubling. Have the functions take the array name and
the number of rows as arguments.
*/
#include "Chapter10.h"
#include <stdio.h>
#define ROWS 3
#define COLS 5

void double_2Darray(double s[][COLS], int rows);
int main(void)
{

    // initialize a new VLA array
    int rs = 3;
    int cs = 5;
    double source[rs][cs];
    for (int i = 0; i < rs; i++)
        for (int j = 0; j < cs; j++)
            source[i][j] = i * j + j;
    show_VLA_2D(rs, cs, source);

    // double it
    double_2Darray(source, rs);
    show_VLA_2D(ROWS, COLS, source);

    return 0;
}

void double_2Darray(double s[][COLS], int rows)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < COLS; j++)
            s[i][j] *= 2;
}
