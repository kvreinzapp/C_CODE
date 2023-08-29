//PE 8 - ­‐7 /* Programming Exercise 8-7 */
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#define BASEPAY1 8.75  // $8.75 per hour
#define BASEPAY2 9.33  // $9.33 per hour
#define BASEPAY3 10.00 // $10.00 per hour
#define BASEPAY4 11.20 // $11.20 per hour
#define BASEHRS 40     // hours at basepay
#define OVERTIME 1.5   // 1.5 time
#define AMT1 300       // 1st rate tier
#define AMT2 150       // 2st rate tier
#define RATE1 0.15     // rate for 1st tier
#define RATE2 0.20     // rate for 2nd tier
#define RATE3 0.25     // rate for 3rd tier
    int
    getfirst(void);
void menu(void);
int main(void)
{
    double hours;
    double gross;
    double net;
    double taxes;
    double pay;
    char response;

    menu();
    while ((response = getfirst()) != 'q')
    {
        if (response == '\n') /* skip over newlines     */
            continue;
        response = tolower(response); /* accept A as a, etc.    */
        switch (response)
        {
        case 'a':
            pay = BASEPAY1;
            break;
        case 'b':
            pay = BASEPAY2;
            break;
        case 'c':
            pay = BASEPAY3;
            break;
        case 'd':
            pay = BASEPAY4;
            break;
        default:
            printf("Please enter a, b, c, d, or q.\n");
            menu();
            continue; // go to beginning of loop
        }
        printf("Enter the number of hours worked this week: ");
        scanf("%lf", &hours);
        if (hours <= BASEHRS)
            gross = hours * pay;
        else
            gross = BASEHRS * pay + (hours - BASEHRS) * pay * OVERTIME;
        if (gross <= AMT1)
            taxes = gross * RATE1;
        else if (gross <= AMT1 + AMT2)
            taxes = AMT1 * RATE1 + (gross - AMT1) * RATE2;
        else
            taxes = AMT1 * RATE1 + AMT2 * RATE2 + (gross - AMT1 - AMT2) * RATE3;
        net = gross - taxes;
        printf("gross: $%.2f; taxes: $%.2f; net: $%.2f\n", gross, taxes,
               net);
        menu();
    }
    printf("Done.\n");

    return 0;
}
void menu(void)
{
    printf("********************************************************"
           "*********\n");
    printf("Enter the letter corresponding to the desired pay rate"
           " or action:\n");
    printf("a)  $%4.2f/hr                b)  $%4.2f/hr\n", BASEPAY1,
           BASEPAY2);
    printf("c) $%5.2f/hr                d) $%5.2f/hr\n", BASEPAY3,
           BASEPAY4);
    printf("q) quit\n");
    printf("********************************************************"
           "*********\n");
}

int getfirst(void)
{
    int ch;

    ch = getchar();
    while (isspace(ch))
        ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}