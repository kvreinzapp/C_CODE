/*Write a program that sets a type double variable to 1.0/3.0 anda type float variable to 1.0/3.0. 
 *Display each result three times—
 *once showing four digits to the right of the decimal,
 *once showing 12 digits to the right of the decimal,
 *and once showing 16 digitsto the right of the decimal. 
 *Also have the program include  float.h and display the values of  FLT_DIG and  DBL_DIG . 
 *Are the displayed values of 1.0/3.0 consistent with these values? 
*/  
#include<stdio.h>
#include<float.h>
int main(void)
{
    double val1=1.0/3.0;
    float val2=1.0/3.0;

    printf("1st: %.4f %.4f\n",val1,val2);
    printf("2ed: %.12f %.12f\n", val1, val2);
    printf("3rd: %.16f %.16f\n", val1, val2);

    printf("%d %d\n", DBL_DIG, FLT_DIG);

    return 0;
}