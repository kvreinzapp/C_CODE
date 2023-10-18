/*Now modify the program of Programming Exercise 5 so that it computes the sum of the 
 squares of the integers. (If you prefer, how much money you receive if you get $1 the 
 first day, $4 the second day, $9 the third day, and so on. This looks like a much better 
 deal!) C doesn’t have a squaring function, but you can use the fact that the square of  n  is 
 n * n .
*/
#include<stdio.h>
int main(void)
{
    int sum=0, count;
    printf("Enter the number here: ");
    scanf("%d",&count);
    
    while (count>0)
    {
        while (count > 0)
        {
            sum = sum + count * count;
            count--;
        }
        printf("the total is %d.\n", sum);
        sum=0;
        
        printf("Enter the next value here(<=0 to quit): ");
        scanf("%d",&count);
    }
    
    return 0;
}  