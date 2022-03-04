/*Write a program that requests the hours worked in a week and then prints the gross pay,
the taxes, and the net pay. Assume the following:
    a.Basic pay rate = $10.00/hr
    b.Overtime (in excess of 40 hours) = time and a half
    c.Tax rate: #15% of the first $300 20% of the next $150 25% of the rest
Use  #define constants, and don’t worry if the example does not conform to current
tax law.
*/
#include<stdio.h>
#define HOURS_RATE 1.5
#define PAY_RATE 10.00
#define TAX_RATE1 0.15
#define TAX_RATE2 0.2
#define TAX_RATE3 0.25
#define TIME_L 40
#define MONEY_L1 300
#define MONEY_L2 450
#define TAX1 MONEY_L1*TAX_RATE1
#define TAX2 TAX1+(MONEY_L2-MONEY_L1)*TAX_RATE2


int main(void)
{
    double hours,gross_pay,taxes;
    printf("Enter your weekly worked hours here: \n");
    scanf("%lf",&hours);
    
    if (hours>TIME_L)
        hours*=HOURS_RATE;
    
    gross_pay = hours * PAY_RATE;
    if(gross_pay<=MONEY_L1)
        taxes=gross_pay*TAX_RATE1;
    else if ((gross_pay > MONEY_L1) && (gross_pay <= MONEY_L2))
        taxes = taxes = (gross_pay - MONEY_L1) * TAX_RATE2 + TAX1;
    else
        taxes = (gross_pay - MONEY_L2) * TAX_RATE3 + TAX2;

    printf("You have worked %.2f hours in this week.\n",(hours<TIME_L)?hours:hours/TIME_L);
    printf("Gross pay: $%.3f. Taxes: $%.3f.\n",gross_pay,taxes);
    printf("You have earned $%.3f (your net pay).\n",gross_pay-taxes);

    return 0;
}