#include <stdio.h>
void exchange(double *p1, double *p2);
void sort(double *p1, double *p2, double *p3);

int main(void)
{
    double num1, num2, num3;
    printf("Enter three here, we gonna sort them(q to quit): ");
    while (3 == scanf("%lf %lf %lf", &num1, &num2, &num3))
    {
        printf("Your input is %g, %g, %g\n", num1, num2, num3);
        sort(&num1, &num2, &num3);
        printf("After sorting, the sequence is %g, %g, %g\n", num1, num2, num3);
        printf("Enter the numbers again(q to quit):");
    }
    return 0;
}
void exchange(double *p1, double *p2)
{
    double temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void sort(double *p1, double *p2, double *p3)
{
    
    while (!((*p1 > *p2) && (*p2 > *p3)))
    {
        if (*p2 > *p1)
            exchange(p1, p2);
        if (*p3 > *p2)
            exchange(p2, p3);
    }
    
}
