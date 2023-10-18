/* Chapter 6 , “C Control Statements: Looping,” ( Listing 6.20 ) shows a  power()
function that returned the result of raising a type  double number to a positive integer value.
Improve the function so that it correctly handles negative powers. Also, build into the
function that 0 to any power other than 0 is 0 and that any number to the 0 power is 1.
(It should report that 0 to the 0 is undefined, then say it’s using a value of 1.) Use a loop.
Test the function in a program.
*/
#include <stdio.h>
double power(double n, int p) ;

int main(void)
{
    double x, xpow;
    int exp;
    printf("Please enter two numbers here: ");
    while (2==scanf("%lf %d",&x, &exp))
    {   
        xpow=power(x,exp);
        printf("Your result is: %g\n", xpow);
        printf("Please enter agian(q to quit):");
    }
    
}

double power(double n, int p)
{
    double sum = 1;
    if (p > 0)
    {
        for (int i = 0; i < p; i++)
        {
            sum *= n;
        }
    }
    if (p < 0)
    {
        for (int i = 0; i < -p; i++)
        {
            sum *= n;
        }
        sum = 1 / sum;
    }
    if ((p == 0) && (n == 0))
    {
        printf("0 to the 0 is undefined; using 1 as the value.\n");
    }
    return sum;
}
