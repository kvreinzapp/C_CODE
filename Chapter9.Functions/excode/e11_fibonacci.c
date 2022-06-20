#include<stdio.h>
unsigned long Fibonacci(unsigned n);
int main(void)
{
    unsigned input;
    printf("Please enter the position you wanted: ");
    while (1 == scanf("%u", &input))
        {
            printf("Your Finonacci numner is %lu\n",Fibonacci(input));
            printf("Please enter again: "); 
        }
    printf("Bye!\n");
    return 0;
}

unsigned long Fibonacci(unsigned n)
{
    unsigned last=1;
    unsigned old_now = 1;
    unsigned new_now;
    for (int i = 0; i < (n-2); i++)
    {
        new_now=last+old_now;
        last = old_now;
        old_now = new_now; 
    }
    return new_now;
}