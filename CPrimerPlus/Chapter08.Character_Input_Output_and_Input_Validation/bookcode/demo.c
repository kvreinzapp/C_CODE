#include <stdio.h>
#include <stdbool.h>


long get_long(void);

int main(void)
{
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start;
    long stop;
    double answer;

    start = get_long();
    
    
}

long get_long(void)
{
    long input;
    char ch;

    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a integer.\nPlease enter an");
        printf("integer value, such as 25, -178, or 3: ");
    }
    return input;
}