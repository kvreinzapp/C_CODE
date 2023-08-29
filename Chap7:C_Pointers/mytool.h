#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print2DArray(unsigned int *ar, int row, int col)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            // printf("%d", ar[i][j]);
        }
    }
}

void print_1dArray(int ar[], int rows)
{
    for (size_t i = 0; i < rows; i++)
    {
        printf("%2d ", ar[i]);
    }
    puts("");
}

bool ordered(int *ar, int n)
{
    for (size_t i = 1; i < n; i++)
    {
        if (ar[i - 1] > ar[i])
        {
            return false;
        }
    }
    return true;
}

void exchange_2_val(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int *ar, int n)
{
    while (!ordered(ar, n))
    {
        for (size_t i = 1; i < n; i++)
        {
            if (ar[i - 1] > ar[i])
            {
                exchange_2_val(&ar[i - 1], &ar[i]);
            }
        }
    }
}