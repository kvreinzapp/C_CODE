/*The ABC Mail Order Grocery sells artichokes for $2.05 per pound, beets for $1.15 per
pound, and carrots for $1.09 per pound. It gives a 5% discount for orders of $100 or
more prior to adding shipping costs. It charges $6.50 shipping and handling for any
order of 5 pounds or under, $14.00 shipping and handling for orders over 5 pounds
and under 20 pounds, and $14.00 plus $0.50 per pound for shipments of 20 pounds or
more.
Write a program that uses a  switch  statement in a loop such that a response of  a
lets the user enter the pounds of artichokes desired,  b the pounds of beets,  c the pounds
of carrots, and  q allows the user to exit the ordering process. The program should keep
track of cumulative totals. That is, if the user enters 4 pounds of beets and later enters
5 pounds of beets, the program should use report 9 pounds of beets. The program then
should compute the total charges, the discount, if any, the shipping charges, and the
grand total. The program then should display all the purchase information: the cost per
pound, the pounds ordered, and the cost for that order for each vegetable, the total cost
of the order, the discount (if there is one), the shipping charge, and the grand total of all
the charges.
*/
#include <stdio.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define DISCOUNT 0.05
#define LIMIT 100
#define CHARGE_1 6.50
#define CHARGE_2 14.0
#define CHARGE_ADD 0.5
#define POUND_1 5
#define POUND_2 20

int main(void)
{
    char ch;
    double a_pound,b_pound,c_pound;
    double sum_p,a_sum_p,b_sum_p,c_sum_p;
    int counter=1;
    double charge;
    printf("*******************************************************************\n");
    printf("Choose your vegetables, and enter the pounds you desired of the it.\n");
    printf("\'a\':artichokes             \'b\': beets            \'c\': carrots\n");
    printf("*******************************************************************\n");
    printf("Enter vegetable here: 1) ");
    while (ch!='q')
    {

        scanf("%c", &ch);
        switch (ch)
        {
        case 'a':
            printf("Deisred pounds of artichokes: ");
            if (1 == (scanf("%lf", &a_pound)))
            {
                a_sum_p+=a_pound;
                printf("Total acrtichokes pounds: %.2f.\n", a_sum_p);
            }else break;
            printf("Enter vegetable here: %d) ", ++counter);
            break;

        case 'b':
            printf("Deisred pounds of beets: ");
            if (1 == (scanf("%lf", &b_pound)))
            {
                b_sum_p += b_pound;
                printf("Total beets pounds: %.2f.\n", b_sum_p);
            }
            else
                break;
            printf("Enter vegetable here: %d) ", ++counter);
            break;
            
        case 'c':
            printf("Deisred pounds of carrots: ");
            if (1 == (scanf("%lf", &c_pound)))
            {
                c_sum_p += c_pound;
                printf("Total carrots pounds: %.2f.\n", c_sum_p);
            }
            else
                break;
            printf("Enter vegetable here: %d) ", ++counter);
            break;

        case 'q':
            break;

        case '\n':
            break;

        default:
            printf("Please choose in the range of \'a\'\'b\'\'c\', try again.\n");
            printf("Try again here: ");
            break;
        }
    }
    sum_p=a_sum_p+b_sum_p+c_sum_p;
    charge = a_sum_p * ARTICHOKE + b_sum_p * BEET + c_sum_p * CARROT;
    if (charge>=LIMIT)
    {
        charge-=charge*DISCOUNT;
    }
    
    if (sum_p<=POUND_1)
    {
        
    }
    else if ((sum_p > POUND_1) && (sum_p <= POUND_2))
    {
        /* code */
    }else
    
    
    


    
    
    
}