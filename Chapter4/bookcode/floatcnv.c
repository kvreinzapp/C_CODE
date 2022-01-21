/* floatcnv.c -- mismatched floating-point conversions */
#include <stdio.h>
#include <limits.h>
#include <float.h>
#define name 'a'

int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4); 
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4); //here's a interesting thing called passing argument, i will figure it out tomorrow202.1.22

    return 0;
}