/*Write a program that converts time in minutes to time in hours and minutes. 
Use #define  or  const to create a symbolic constant for 60. 
Use a  while loop to allow the user to enter values repeatedly and terminate the loop 
if a value for the time of 0 or less is entered.  
*/
#include<stdio.h>
#define S_PER_M 60
int main(void)
{
    int min;
    
    printf("Enter time in minutes here");
    printf("(Enter 0 or less to quit)\n");
    scanf("%d",&min);

    while (min>0)
    {
        printf("Your time in hours and minutes is %d hours %d minutes\n",
               min / S_PER_M, min % S_PER_M);
        printf("Enter you next mins");
        printf("(Enter 0 or less to quit)\n");
        scanf("%d",&min);
    }

    printf("That's all.\n");

    return 0;

}