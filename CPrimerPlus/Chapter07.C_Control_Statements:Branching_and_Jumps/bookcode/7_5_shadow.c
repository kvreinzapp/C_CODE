#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int num,div;                 //[1]1unsigned long int   is a better one
    bool isprime = true;         //[2]the way you named, isPrime is a better one
                                 //[3]dont true here, just bool isPrime;

    printf("Enter the intger here: ");

    while (1==scanf("%d",&num))  //[1]all %d will be %lu, will not mention later
    {
        for ( div = 2; div*div <= num; div++)  //[3]for (div=0,isPrime=true)
        {
            if (0==num%div)
            {
                isprime=false;
                if(num!=div*div)
                    printf("The divisors of %d is %d and %d\n", num, div, num / div);
                else
                    printf("The divisors of %d is %d\n", num, div);
            }      
        }
        if(true==isprime)                     //[4]just if(isPrime)
            printf("%d is a prime number\n", num);

        isprime = true;                       //[3]not need 
        printf("Enter the next intger here(q to quit): ");
        
    }
    return 0;
}