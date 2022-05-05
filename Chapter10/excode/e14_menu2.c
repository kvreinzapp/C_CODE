/*
Do Programming Exercise 13, but use variable-length array function parameters.
 */
#include <stdio.h>
#include "Chapter10.h"
#define ROWS 3
#define COLS 5

void input_array(int rows, int cols, double s[rows][cols]);
void row_average(int rows, int cols, double s[rows][cols]);
void all_average(int rows, int cols, double s[rows][cols]);

int main(void)
{
    int r = 3;
    int c = 5;
    double input[r][c];

    input_array(r, c, input);
    show_VLA_2D(r, c, input);
    row_average(r, c, input);
    all_average(r, c, input);
    fd_2Dmost(r, c, input, 1);

    return 0;
}

void input_array(int rows, int cols, double s[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        printf("Enter 5 double numbers seprated by enter\n");
        for (int j = 0; j < cols; j++)
        {
            scanf("%lf", &s[i][j]);
        }
    }
}

void row_average(int rows, int cols, double s[rows][cols])
{
    double subtot;
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0, subtot = 0; j < cols; j++)
        {
            subtot += s[i][j];
        }
        printf("The average of row%d is %g\n", i, subtot / COLS);
    }
}

void all_average(int rows, int cols, double s[rows][cols])
{
    double total = 0;
    printf("%g", total);
    int i, j;

    for (i = 0; i < rows; i++)
        for (j = 0; j < COLS; j++)
            total += s[i][j];

    printf("The average of all is %g\n", total / (COLS * ROWS));
}