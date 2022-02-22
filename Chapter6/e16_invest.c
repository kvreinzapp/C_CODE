/*Daphne invests $100 at 10% simple interest. (That is, every year, the investment earns 
an interest equal to 10% of the original investment.) Deirdre invests $100 at 5% interest 
compounded annually. (That is, interest is 5% of the current balance, including previous 
addition of interest.) Write a program that finds how many years it takes for the value 
of Deirdre’s investment to exceed the value of Daphne’s investment. Also show the two 
values at that time.    */
#include<stdio.h>
int main(void)
{
    int years;
    double sum1, sum2;


    for (years = 0,sum1=100,sum2=100; sum1>=sum2; years++)
    {
        sum1+=10;
        sum2*=1.05;
        printf("%f %f\n",sum1,sum2);   
    }
    printf("It takes %d years.\n", years);

    return 0;
}
//another way--use do while
/* float daphne, deirdre;
    daphne = deirdre = 100.0;
    int year = 0;
    do
    {
        daphne = daphne + 100 * 0.1;
        deirdre = deirdre + deirdre * 0.05;
        year++;
       // 计算两人的每年利息及原始投资的总和
     }
    while ((deirdre - daphne) < 0);
    // daphne高于deirdre 退出循环
    printf("%d years later.\nDaphne = %f.\nDeirdre= %f \n", year, daphne, deirdre);
    printf("\nDone!\n");
*/