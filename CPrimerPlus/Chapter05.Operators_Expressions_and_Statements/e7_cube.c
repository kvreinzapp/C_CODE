/*Write a program that requests a type  double number and prints the value of the number cubed. 
 Use a function of your own design to cube the value and print it. 
 The  main()  program should pass the entered value to this function.
*/   
#include<stdio.h>

void cube_print(double val);

int main(void)
{
    double num;
    printf("Enter the value here(can be fractional): ");
    scanf("%lf", &num);
    cube_print(num);
}

void cube_print(double val)
{
    val=val*val*val;
    //printf("cubed value is %f\n", val); //to see how to trunction
    printf("cubed value is %.2f\n",val);

}