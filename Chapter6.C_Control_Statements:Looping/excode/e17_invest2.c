/*Chuckie Lucky won a million dollars (after taxes), which he places in an account that 
earns 8% a year. On the last day of each year, Chuckie withdraws $100,000. Write a 
program that finds out how many years it takes for Chuckie to empty his account.    */
#include<stdio.h>
#define MONREY 1000000
#define WITHDRAW 100000
int main(void)
{
    double sum=MONREY;
    int years=0;

    do{
        sum*=1.08;
        sum-=WITHDRAW;
        years++;
    }while(sum>=WITHDRAW);

    printf("After %d years, he still have %f dollars, that's mean he empty his account\n",years,sum);

    return 0;
}