/*Modify exercise 8 so that it uses a function to return the value of the calculation.*/
#include <stdio.h>

double cal(double a, double b);
int main(void)
{

    double x,y;

    printf("Enter two float-point number here: ");

    while (2 == scanf("%lf %lf", &x, &y))
    {
        printf("There difference divided by their product is %f\n", cal(x,y));
        printf("Enter new pair(q to quit): ");
    }
    printf("That's all.\n");

    return 0;
}

double cal(double a, double b)
{

    double cal;
    cal = (a - b) / a * b;
    return cal;
}