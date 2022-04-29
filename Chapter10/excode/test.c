/* Programming Exercises 10-6.c */

// Write a function that reverses the contents of an array of double and test it in a simple
// program.
double source[12] = {2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3};
#include <stdio.h>
#define SIZE 5

void reverse(double array[], int number);

int main(void)
{
    double array[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};

    printf("The contents of the array are:\n");
    for (int i = 0; i < SIZE; i++)
        printf("%.1lf\n", array[i]);

    reverse(array, SIZE);

    printf("\nThe contents of the array now are:\n");
    for (int j = 0; j < SIZE; j++)
        printf("%.1lf\n", array[j]);

    return 0;
}

