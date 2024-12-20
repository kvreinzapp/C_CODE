/*Write a program that displays the results of applying the modulus operation. The user 
 should first enter an integer to be used as the second operand, which will then remain 
 unchanged. Then the user enters the numbers for which the modulus will be computed, 
 terminating the process by entering 0 or less. A sample run should look like this:  
  This program computes moduli.
  Enter an integer to serve as the second operand:  256 
  Now enter the first operand:  438 
  438 % 256 is 182
  Enter next number for first operand (<= 0 to quit):  1234567 
  1234567 % 256 is 135
  Enter next number for first operand (<= 0 to quit):  0 
  Done 
*/ 
#include<stdio.h>
int main(void)
{
    int first_op,second_op;

    printf("This program compute moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d",&second_op);
    printf("Now enter the first operand: ");
    scanf("%d",&first_op);

    while (first_op>0)
    {
        printf("%d %% %d is %d\n",first_op,second_op,first_op%second_op);
        printf("Enter the next number for first operand (<= 0 to quit): ");
        scanf("%d",&first_op);
    }
    printf("Done\n");
    
    return 0;
}