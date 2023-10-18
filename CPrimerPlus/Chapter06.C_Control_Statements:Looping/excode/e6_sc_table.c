/*Write a program that prints a table with each line giving an integer, its square, and its 
cube. Ask the user to input the lower and upper limits for the table. Use a  for  loop.  */
#include<stdio.h>
int main(void)
{
    int count,lower,upper;

    printf("Enter the lower and upper limits here(integers): ");
    scanf("%d %d",&lower,&upper);
    printf("integer square cube\n");

    for (count = 0; lower <= upper; count++, lower++)
        printf("%4d %7d %6d\n", lower, lower * lower, lower * lower * lower);

    return 0;
    
}