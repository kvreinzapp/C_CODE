/*Write a program that reads integers until 0 is entered. After input terminates, the
program should report the total number of even integers (excluding the 0) entered, the
average value of the even integers, the total number of odd integers entered, and the
average value of the odd integers.*/
#include <stdio.h>
int main(void)
{
    int val = 0;
    int even = 0;
    int odd = 0;
    double sum_e = 0;
    double sum_o = 0;
    printf("Enter integers here to analyse: ");

    while (scanf("%d", &val))
    {
        if(val==0) break;
        if (val % 2 == 0)
        {
            even++;
            sum_e += val;
        }
        else
        {
            odd++;
            sum_o += val;
        }
    }
    printf("Total number of even integers: %d, average value: %.3f\n", even, sum_e / even);
    printf("Total number of odd integers: %d, average value: %.3f\n", odd, sum_o / odd);

    return 0;
}