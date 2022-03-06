/*
The 1988 United States Federal Tax Schedule was the simplest in recent times. It had
four categories, and each category had two rates. Here is a summary (dollar amounts are
taxable income):
 Category                      Tax
 Single                        15% of first $17,850 plus 28% of excess
 Head of Household             15% of first $23,900 plus 28% of excess
 Married, Joint                15% of first $29,750 plus 28% of excess
 Married, Separate             15% of first $14,875 plus 28% of excess
For example, a single wage earner with a taxable income of $20,000 owes 0.15 × $17,850
+ 0.28 × ($20,000−$17,850). Write a program that lets the user specify the tax category
and the taxable income and that then calculates the tax. Use a loop so that the user can
enter several tax cases.
*/
#include <stdio.h>
#define FIR_RATE 0.15
#define SEC_RATE 0.28

#define SINGLE 17850
#define HEAD 23900
#define M_JOINT 29750
#define M_SEPA 14875

void show_menu(void);
void cal_dis(int input, double limit);

int main(void)
{
    while (1)
    {
        // Part1: hint
        show_menu();

        // Part2: choose
        int input;
        double limit;
        printf("Enter your choice here: ");
        scanf("%d", &input);
        
        switch (input)
        {
        case 1:
            limit = SINGLE;
            break;
        case 2:
            limit = HEAD;
            break;
        case 3:
            limit = M_JOINT;
            break;
        case 4:
            limit = M_SEPA;
            break;
        case 5:
            break;
        default:
            printf("Please try again, enter integer from 1~5.\nTry it again!\n\n");
            continue;
        }
        if (input==5)
        {
            printf("Bye!\n");
            break;
        }
            
        printf("You chosed %d).\n", input);
        printf("Your tax strategy is:\" 15%% of first $%.f plus 28%% of excess.\"\n\n", limit);

        // Part3:calculate and display
        cal_dis(input, limit);
    }
    
    

    return 0;
}

// Part-1: show menu
void show_menu(void)
{
    for (int i = 0; i < 48; i++)
        printf("*");
    printf("\nEnter the number corresponding to your identity.\n");
    printf("1) Single                   2) Head of Household \n");
    printf("3) Married, Joint           4) Married, Separate \n");
    printf("5) quit\n");
    for (int i = 0; i < 48; i++)
        printf("*");
    printf("\n");
}
//Part-2: choose your identity


// Part-3: calculate and display
void cal_dis(int input, double limit)
{
    double tax, money;
    printf("Enter your income here: ");
    scanf("%lf", &money);

    tax = limit * FIR_RATE + ((money - limit) * SEC_RATE);
    printf("Your income is $%.2f, your tax is $%.2f, you earned $%.2f.\n"
            ,money,tax,(money-tax));
    printf("Continue...\n\n");
}
