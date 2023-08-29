/*Modify assumption a. in exercise 7 so that the program presents a menu of pay rates 
from which to choose. Use a  switch  to select the pay rate. The beginning of a run 
should look something like this:  
  *****************************************************************
  Enter the number corresponding to the desired pay rate or action:
  1) $8.75/hr                         2) $9.33/hr
  3) $10.00/hr                        4) $11.20/hr
  5) quit
  *****************************************************************   
If choices 1 through 4 are selected, the program should request the hours worked. The 
program should recycle until 5 is entered. If something other than choices 1 through 5 
is entered, the program should remind the user what the proper choices are and then 
recycle. Use  #defined  constants for the various earning rates and tax rates.*/

#include <stdio.h>
#include <stdio.h>
#define HOURS_RATE 1.5
//#define pay_rate 10.00
#define TAX_RATE1 0.15
#define TAX_RATE2 0.2
#define TAX_RATE3 0.25
#define TIME_L 40
#define MONEY_L1 300
#define MONEY_L2 450
#define TAX1 MONEY_L1 *TAX_RATE1
#define TAX2 TAX1 + (MONEY_L2 - MONEY_L1) * TAX_RATE2

void show_menu(void);
void calculate(double hours, double pay_rate);

int main(void)
{
    int input;
    while (input!=5)
    {
        // Part1: Hint     //a better way 
        show_menu();
        printf("Enter your choice here: ");
        scanf("%d", &input);

        // Part2: choose the rate
        double pay_rate;
        switch (input)
        {
        case 1:
            pay_rate = 8.75;
            break;
        case 2:
            pay_rate = 9.33;
            break;
        case 3:
            pay_rate = 10.00;
            break;
        case 4:
            pay_rate = 11.29;
            break;
        case 5:
            break;
        default:
            getchar(); // i figureit by myself, but this kind of regardless. 2022 3.22
            printf("You should enter the integer through 1 to 5.\n");
            printf("Please enter again.\n");
            continue;
        }
        if (input==5)
            break;
        
        // Part3: calculate
        double hours;
        calculate(hours, pay_rate);
    }
    
    return 0;
}

//Part-1: show menu
void show_menu(void)
{
    for (int i = 0; i < 65; i++)
        printf("*");
    printf("\nEnter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr                         2) $9.33/hr\n");
    printf("3) $10.00/hr                        4) $11.20/hr\n");
    printf("5) quit\n");
    for (int i = 0; i < 65; i++)
        printf("*");
    printf("\n");
}

// Part-2: function
void calculate(double hours,double pay_rate)
{
    double gross_pay, taxes;
    printf("You choose $%.2f/hr.\n", pay_rate);
    printf("Enter your weekly worked hours here: ");
    scanf("%lf", &hours);

    if (hours > TIME_L)
        hours = TIME_L + ((hours - TIME_L) * HOURS_RATE);

    gross_pay = hours * pay_rate;
    if (gross_pay <= MONEY_L1)
        taxes = gross_pay * TAX_RATE1;
    else if ((gross_pay > MONEY_L1) && (gross_pay <= MONEY_L2))
        taxes = (gross_pay - MONEY_L1) * TAX_RATE2 + TAX1;
    else
        taxes = (gross_pay - MONEY_L2) * TAX_RATE3 + TAX2;

    printf("%s %.2f %s", (hours > 40) ? "You have worked over 40 hrs, that mean" : "You have worked", hours,
           (hours > 40) ? "hrs counts for your pay.\n" : "hours in this week.\n");
    printf("Gross pay: $%.3f. Taxes: $%.3f.\n", gross_pay, taxes);
    printf("You have earned $%.3f (your net pay).\n\nContinue...\n", gross_pay - taxes);
}