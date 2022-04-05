#include<stdio.h>
double harmonic(double, double);
int main(void)
{
    double num1,num2;
    printf("Enter two number here:(q to quit) ");
    while (2==scanf("%lf %lf",&num1,&num2))
    {
        printf("The harmonic mean of them is %g.\n", harmonic(num1, num2));
        printf("Please enter again(q to quit)\n");
    }
    return 0;    
}

double harmonic(double a, double b)
{
    return 1 / ((1 / a + 1 / b) / 2);
}