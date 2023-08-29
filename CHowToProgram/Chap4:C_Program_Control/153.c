#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0;
    double rate = .05;
    printf("%4s%18s\n", "year", "Amount on deposit");
    for (unsigned int years = 0; years < 10; ++years)
    {
        double amount = principal * pow(1.0 + rate, years);
        printf("%4d%18.2f\n", years, amount);
    }
}