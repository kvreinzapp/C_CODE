#include <stdio.h>
int factorial(int);
int main(void)
{
    printf("%d", factorial(3));
    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
    {
        // int recurse = factorial(n - 1);
        // int result = n * recurse;
        int result = n * factorial(n - 1);
        return result;
    }
}