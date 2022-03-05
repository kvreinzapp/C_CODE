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
void show_menu(void);

int main(void)
{


}


// Part-1: show menu
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
