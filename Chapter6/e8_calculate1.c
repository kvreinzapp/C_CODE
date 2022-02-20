/*Write a program that requests two floating-point numbers and prints the value of their 
difference divided by their product. 
Have the program loop through pairs of input values until the user enters nonnumeric input.*/
#include<stdio.h>
int main(void)
{
    double a,b;

    printf("Enter two float-point number here: ");

    while (2 == scanf("%lf %lf", &a, &b))
    {
        printf("There difference divided by their product is %f\n", (a - b) / a * b);
        printf("Enter new pair(q to quit): ");
    }
    printf("That's all.\n");

    return 0;
}    