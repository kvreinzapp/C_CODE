/*Write a function that returns the index of the largest value stored in an array-of-double .
Test the function in a simple program.
*/
#include <stdio.h>
#define LEN 7
int fd_index(double s[], int n);
void show_arr(double s[], int n);

int main(void)
{
    double source[LEN] = {1.2, 2.5, 7.5, 4.5, 0.25, 6, 4.5};
    show_arr(source, LEN);
    printf("\nThe index of the biggest numner is %d\n", fd_index(source, LEN));
}

int fd_index(double s[], int n)
{
    double largest = s[0];
    int index;

    for (int i = 1; i < n; i++)
    {
        if (s[i] > largest)
        {
            largest = s[i];
            index = i;
        }
    }
    return index;
}

void show_arr(double s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%g ", s[i]);
    }
}