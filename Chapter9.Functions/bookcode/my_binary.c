#include <stdio.h>
void to_binary(long); // void to_binary(unsigned long n);

int main(void)
{ 
    long input; // unsigned long number;    
    printf("Enter an integer (q to quit):");
    while (1 == scanf("%ld", &input))
    {
        printf("Binary equivalent:");
        to_binary(input);
        printf("\nEnter an integer (q to quit):");
    }
    printf("Done!\n");

    return 0;
}
void to_binary(long n) // void to_binary(unsigned long n);
{
    int r;
    r = n % 2;
    if (n >= 2)
    {
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
}