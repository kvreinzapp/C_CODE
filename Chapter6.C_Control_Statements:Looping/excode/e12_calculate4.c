/*Consider these two infinite series:  
  1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
  1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...   
Write a program that evaluates running totals of these two series up to some limit of 
number of terms. Hint: –1 times itself an odd number of times is –1, and –1 times itself 
an even number of times is 1. Have the user enter the limit interactively; let a zero or 
negative value terminate input. Look at the running totals after 100 terms, 1000 terms, 
10,000 terms. Does either series appear to be converging to some value? */
#include<stdio.h>
int main(void)
{
    int l,i,sig;
    double sum1,sum2;

    printf("Enter the first and second limit here: ");
    scanf("%d",&l);

    while (l>0)
    {
        for (sum1 = 1.0, i =0 ; i < (l-1); i++)
            sum1 += 1.0 / (i+2);
        for (sig=1,sum2 = 1.0, i = 0; i < (l-1); i++)
        {
            sig*=-1;
            sum2+=sig*(1.0 / (i+2));
        }
        printf("The result of first one is %f\nThe result of second one is %f\n", sum1, sum2);
        printf("Enter the next limit(<=0 to quit): ");
        scanf("%d", &l);
    }
    printf("Done\n");

    return 0;
    
}   