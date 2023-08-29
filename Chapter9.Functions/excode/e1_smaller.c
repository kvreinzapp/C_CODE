#include <stdio.h>
double min(double, double);
int main(void)
{
    double a, b;
    printf("Enter two number:");
    while (2 == scanf("%lf %lf", &a, &b))
    {
        printf("The smaller one is %f\n", min(a, b));
        printf("Please enter two number again.(q to quit.)\n");
    }
    return 0;
}
double min(double x, double y)
{
    return x < y ? x : y;
}