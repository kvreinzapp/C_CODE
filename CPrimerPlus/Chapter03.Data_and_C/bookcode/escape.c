// use escape characters
#include<stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\t$%.2f a month is $%.2f a year.",salary,salary*12.0); //no need a \n like book P92
    printf("\rGee!\n");

    return 0;
}
