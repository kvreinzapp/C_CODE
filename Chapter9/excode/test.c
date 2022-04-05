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
    double max, middle, min, temp;
    max = *p1;
    middle = *p2;
    min = *p3;
    while (!((max > middle) && (middle > min)))
    {
        if (middle > max)
            exchange(&max, &middle);
        if (min > middle)
            exchange(&min, &middle);
    }
    *p1 = max;
    *p2 = middle;
    *p3 = min;
}
