#include <stdio.h>
// Function to show the double array you just input
void show_arr(const double s[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%g ", s[i]);
}

// Function to find the biggest number in the array
double fd_most(const double s[], int n, int l)
{
    double result = s[0];
    for (int i = 0; i < n; i++)
        if (l ? (s[i] > result): (s[i] < result))
            result=s[i];
    return result;
}
    