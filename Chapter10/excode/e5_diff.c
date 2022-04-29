/*
Write a function that returns the difference between the largest and smallest elements of
an array-of- double . Test the function in a simple program.
 */
#include <stdio.h>
#include "Chapter10.h"
double fd_diff(double s[], int n);
int main(void)
{
    double orig[5] = {1.1, 2.2, 3.3, 6.3, 5.5};
    show_arr(orig, 5);
    printf("The difference between the largest and smallest elements is %g\n", fd_diff(orig, 5));

    return 0;
}

double fd_diff(double s[], int n)
{
    double diff = fd_most(s, n, 1) - fd_most(s, n, 0);
    return diff;
}