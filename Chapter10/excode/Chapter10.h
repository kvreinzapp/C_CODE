#include <stdio.h>
// Function to show the double array you just input
void show_arr(const double s[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%g ", s[i]);
    putchar('\n');
}

// Function to find the biggest number in the array
double fd_most(const double s[], int n, int l)
{
    double result = s[0];
    for (int i = 0; i < n; i++)
        if (l ? (s[i] > result) : (s[i] < result))
            result = s[i];
    return result;
}

// reverse the content of a double array
// I copy this from elsewhere, but it help
void reverse(double array[], int number)
{
    double temp;

    for (int k = 0; k < number / 2; k++) // just exchage the half
    {
        temp = *(array + k);                      // give the first half of values to temp
        *(array + k) = *(array + number - 1 - k); // give the later half to former
        *(array + number - 1 - k) = temp;         // give the former half from temp
    }
}

// copy 1—D array ,use array notation
void copy_arr(double t[], const double s[], int n)
{
    for (int i = 0; i < n; i++)
        t[i] = s[i];
}

// copy 1—D array ,use pointer notation
void copy_ptr(double *t, const double *s, int n)
{
    for (int i = 0; i < n; i++)
        *(t + i) = *(s + i);
}

// copy 1—D array ,use pointers
// Pay attention that when you call the function, the s_last + sth must
//  over the array
void copy_ptrs(double *t, const double *s_first, double *s_last)
{
    for (int i = 0; i < (s_last - s_first); i++)
        *(t + i) = *(s_first + i);
}

// Function to copy N*M VLA array
void copy_VLA_2D(int rows, int cols, double t[rows][cols], const double s[rows][cols])
{
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            t[r][c] = s[r][c];
        }
    }
}
// Function to show N*M VLA array
void show_VLA_2D(int rows, int cols, const double s[rows][cols])
{
    printf("This is your array now: \n");
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            printf("%g ", s[r][c]);
        }
        putchar('\n');
    }
}