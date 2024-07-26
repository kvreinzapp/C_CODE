#include <stdio.h>
void larger_of(double *, double *);
int main(void)
{
    double num1, num2;
    printf("Two here: ");
    while (2 == scanf("%lf %lf" ,&num1, &num2))
    {
        printf("Your two number is %g, %g\n",num1, num2);
        larger_of(&num1, &num2);
        printf("Now they are %g and %g",num1,num2);
        printf("Hrer again: (q to quit)");
    }

    return 0;
}

void larger_of(double *a, double *b)
{
    double temp;
    temp = *a > *b ? *a : *b;
    *a=*b=temp;
}

// The following way is smarter

void larger_of(double *p1, double *p2)
{
    *p1= *p2 = *p1 > *p2 ? *p1 : *p2;
}
