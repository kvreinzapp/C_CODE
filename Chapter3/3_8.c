//In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, anounce is 2 tablespoons, and a tablespoon is 3 teaspoons. 
//Write a program that requests a volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons, and teaspoons. 
//Why does a floating-point type make more sense for this application than an integer type?
#include<stdio.h>
int main(void)
{   
    float cups;

    printf("how many pints of water do you have? :");
    scanf("%f",&cups);
    printf("the volume in water is %f pints, %f ounces, %f tablespoons, %f teaspoons.\n",cups/2,cups*8,cups*8*2,cups*8*2*3);
    
    return 0;
}
