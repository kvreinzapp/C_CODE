/*Write a program that initializes a two-dimensional array-of-double and uses one of the
copy functions from exercise 2 to copy it to a second two-dimensional array. (Because a
two-dimensional array is an array of arrays, a one-dimensional copy function can be used
with each subarray.)
*/
#include <stdio.h>
#include "Chapter10.h"
#define ROWS 3
#define COLS 2
void show_arr_2D(const double s[][COLS], int rows);
void copy_arr_2D(double t[][COLS], const double s[][COLS], int rows);
int main(void)
{
    double source[ROWS][COLS] = {1, 2, 3, 4, 5, 6};
    double target[ROWS][COLS] = {0, 0, 0, 0, 0, 0};

    printf("source array: \n");
    show_arr_2D(source, ROWS);
    printf("target array: \n");
    show_arr_2D(target, ROWS);
    copy_arr_2D(target, source, ROWS);
    printf("target array after copy: \n");
    show_arr_2D(target, ROWS);
}

// print this 2D array
void show_arr_2D(const double s[][COLS], int rows)
{
    for (int i = 0; i < rows; i++)
        show_arr(s[i], COLS);
}

// copy this 2D array
void copy_arr_2D(double t[][COLS], const double s[][COLS], int rows)
{
    for (int i = 0; i < rows; i++)
        copy_arr(t[i], s[i], ROWS);
}