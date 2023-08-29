/*Write a program that requests your height in inches and your name, 
 and then displays the information in the following form:  
  Dabney, you are 6.208 feet tall   
 Use type  float , and use  / for division.
 If you prefer, request the height in centimeters and display it in meters.
*/
#include<stdio.h>
int main(void)
{
    float height;
    char name[40];

    printf("What's your name?: ");
    scanf("%s",name);
    printf("What's your height?(in centimeters):");
    scanf("%f",&height);

    printf("%s, you are %.3f meters tall\n",name,height/100);

    return 0;
}