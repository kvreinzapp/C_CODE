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

void get_set(double ar[], int n, int o);
int main(void)
{
    double set1[COLS], set2[COLS], set3[COLS];
    double set[ROWS][COLS];

    get_set(set1, COLS, 1);
    get_set(set2, COLS, 2);
    get_set(set3, COLS, 3);

    return 0;
}

void get_set(double ar[], int n, int o)
{
    printf("Enter your set%d here: \n", o);
    for (int i = 0; i < COLS; i++)
    {
        scanf("%lf", (ar + i));
    }
    printf("Your set%d is :", o);
    show_arr(ar, COLS);
}
