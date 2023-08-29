/*Write a program that reads eight integers into an array and then prints them in reverse 
order.  */
#include<stdio.h>
int main(void)
{
    const int VAL=8;
    int num[VAL];
    int i;

    printf("Enter eight integers here: ");

    for ( i = 0; i < VAL; i++)
        scanf("%d",&num[i]);

    printf("Ok, the reverse data is :");
    for ( i = 0; i < VAL; i++)
        printf(" %d",num[VAL-i-1]);

    printf("\nDone!\n");

    return 0;
}