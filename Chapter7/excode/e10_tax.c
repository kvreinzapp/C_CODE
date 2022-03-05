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
#include<stdio.h>
#define FIR_RATE 0.15
#define SEC_RATE 0.28

#define SINGLE   17850
#define HEAD     23900
#define M_JOINT  29750
#define M_SEPA   14875

void show_menu(void);

int main(void)
{
    //Part0: hint
    show_menu();
    //Part1:
    int input;
    double money;
    printf("Enter your choice here: ");

    switch (input)
    {
    case 1:
        money=SINGLE;
        break;
    case 2:
        money = HEAD;
        break;
    case 3:
        money = M_JOINT;
        break;
    case 4:
        money = M_SEPA;
        break;
    case 5:
        break;
    default:
        break;
    }
    printf("You chosed %d), and your tax strategy is 15%% of first $%f plus 28%% of excess"
            ,input,money);
    

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
