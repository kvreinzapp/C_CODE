/*Write a program that asks the user to enter a height in centimeters and then displays the 
 height in centimeters and in feet and inches. Fractional centimeters and inches should 
 be allowed, and the program should allow the user to continue entering heights until a 
 nonpositive value is entered. A sample run should look like this:  
  Enter a height in centimeters:  182 
  182.0 cm = 5 feet, 11.7 inches
  Enter a height in centimeters (<=0 to quit):  168.7 
  168.0 cm = 5 feet, 6.4 inches
  Enter a height in centimeters (<=0 to quit):  0 
  bye  
*/ 
#include<stdio.h>
#define CM_PER_F 30.48      // one foot is defined as 30.48 centimeters exactly
#define F_PER_I 0.08333     //one inch is defined as 1/12 or 0.08333 feet
int main(void)
{
    double cm,inch;
    int feet;

    printf("Enter a height in centimeters: ");
    scanf("%lf",&cm);

    while (cm>0)

    {   feet=cm/CM_PER_F;
        inch=(cm-feet*CM_PER_F)/CM_PER_F/F_PER_I;

        printf("%.1f cm = %d feet, %.1f inches\n",cm,feet,inch);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%lf", &cm);
    }
    printf("bye\n");

    return 0;
}

//sum
//1：cm is a better name
//2: %lf for scan float