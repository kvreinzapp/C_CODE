/*Write a program that prompts the user to enter three sets of five  double numbers each.
(You may assume the user responds correctly and doesn’t enter non-numeric data.) The
program should accomplish all of the following:

a.Store the information in a 3×5 array.
b.Compute the average of each set of five values.
c.Compute the average of all the values.
d.Determine the largest value of the 15 values.
e.Report the results.

Each major task should be handled by a separate function using the traditional C
approach to handling arrays. Accomplish task “b” by using a function that computes
and returns the average of a one-dimensional array; use a loop to call this function three
times. The other tasks should take the entire array as an argument, and the functions
performing tasks “c” and “d” should return the answer to the calling program.
*/
#include "Chapter10.h"
#include <stdio.h>
#define ROWS 3
#define COLS 5

void input_array(double ar[][COLS], int n);
void row_average(double ar[][COLS], int n);
void all_average(double ar[][COLS], int n);
void fd_tradi_largest(double s[][COLS], int n);

int main(void)
{
    double input[ROWS][COLS];
    int label = 0;

    // get the 2D array
    input_array(input, ROWS);

    // show your input
    show_VLA_2D(ROWS, COLS, input);

    // Calculate the average of each line
    row_average(input, ROWS);
    // Calculate the average of all
    all_average(input, ROWS);

    // Determine the largest value of the 15 values.
    fd_2Dmost(ROWS, COLS, input, label);
    // printf("The old way:");
    // fd_tradi_largest(input, ROWS);

    return 0;
}

void input_array(double ar[][COLS], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter 5 double numbers seprated by enter\n");
        for (int j = 0; j < COLS; j++)
        {
            scanf("%lf", &ar[i][j]);
        }
    }
}

void row_average(double ar[][COLS], int n)
{
    double subtot;
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0, subtot = 0; j < COLS; j++)
        {
            subtot += ar[i][j];
        }
        printf("The average of row%d is %g\n", i, subtot / COLS);
    }
}

void all_average(double ar[][COLS], int n)
{
    double total = 0;
    printf("%g", total);
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < COLS; j++)
            total += ar[i][j];

    printf("The average of all is %g\n", total / (COLS * ROWS));
}

void fd_tradi_largest(double s[][COLS], int n)
{
    double largest = s[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (s[i][j] > largest)
            {
                largest = s[i][j];
            }
        }
    }
    printf("Largest number is %g", largest);
}