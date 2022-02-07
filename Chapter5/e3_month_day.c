/*Write a program that asks the user to enter the number of days and then converts that 
  value to weeks and days. 
  For example, it would convert 18 days to 2 weeks, 4 days. 
  Display results in the following format:  
  18 days are 2 weeks, 4 days.   
  Use a  while loop to allow the user to repeatedly enter day values; terminate the loop 
  when the user enters a nonpositive value, such as  0 or  -20 . 
*/
#include<stdio.h>
#define D_PER_W 7       //days per week
int main(void)
{
    int days;
    printf("Enter the days (<=0 to quit):\n");
    scanf("%d",&days);

    while(days>0)
    {
        printf("%d days are %d weeks %d days.\n",days,days/D_PER_W,days%D_PER_W);
        printf("Enter the next days (<=0 to quit):\n");
        scanf("%d",&days);
    }
    printf("That's all!\n");

    return 0;
}