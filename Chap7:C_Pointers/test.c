#include <stdio.h>
#include "mytool.h"

#define NUMS 5
int main(void)
{
    int ar[NUMS] = {4, 47, 32, 65, 31};
    bubble_sort(ar, NUMS);
    print_1dArray(ar, NUMS);
}
// Use gdb to find out where is wrong

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
    for (size_t i = 0; i < n; i++)
    {
        if (ar[i] > ar[i + 1])
        {
            return false;
        }
    }
    return true;
}

void exchange_2_val(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void bubble_sort(int *ar, int n)
{
    while (!ordered(ar, n))
    {
        for (size_t i = 0; i < n; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                exchange_2_val(ar[i], ar[i + 1]);
            }
        }
    }
}