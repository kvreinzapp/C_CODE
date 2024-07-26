/*Write a program that requests the user to enter a Fahrenheit temperature. The program 
should read the temperature as a type  double  number and pass it as an argument to 
a user-supplied function called  Temperatures() .
This function should calculate the 
Celsius equivalent and the Kelvin equivalent and display all three temperatures with a 
precision of two places to the right of the decimal. It should identify each value with the 
temperature scale it represents. Here is the formula for converting Fahrenheit to Celsius:  
   Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0)  
The Kelvin scale, commonly used in science, is a scale in which 0 represents absolute 
zero, the lower limit to possible temperatures. Here is the formula for converting Celsius 
to Kelvin:  
   Kelvin = Celsius + 273.16  
The Temperatures() function should use  const to create symbolic representations of 
the three constants that appear in the conversions. The  main() function should use 
a loop to allow the user to enter temperatures repeatedly, stopping when a  q or other 
nonnumeric value is entered. 
Use the fact that  scanf() returns the number of items read, so it will return  1 if it reads a number,
but it won’t return 1 if the user enters  q . 
The == operator tests for equality, so you can use it to compare the return value of  scanf() with  1 .*/
#include<stdio.h>

void Temperatures(double Fahrenheit);

int main(void)
{
    //int fact;
    double input;
    //printf("Enter the Fahrenheit temperature here: ");
    //scanf("%lf",&input);
    printf("This program convert fahrenheit to celsius and kelvin.\n");// 1st to learn: tell them the purpose
    printf("Enter a fahrenheit to start : ");

    while (scanf("%lf", &input) == 1) // instead of while (fact==1)    //2nd to learn: a better way
    {
        Temperatures(input);
        printf("Enter the next Fahrenheit (not enter a number to quit): ");
        //fact = scanf("%lf", &val);
    }
    printf("Done\n");

    return 0;
}

void Temperatures(double Fahrenheit)
{
    const double F_TO_C1 = 5.0 / 9.0;
    const double F_TO_C2 = 32.0;
    const double C_TO_K = 273.16;
    
    double Celsius, Kelvin;
    Celsius = F_TO_C1* (Fahrenheit - F_TO_C2);                   //PA: const can take place any nunber is the formula
    Kelvin = Celsius + C_TO_K;
    printf("%.2f. Fahrenheit, equal %.2f Celsius, and %.2f Kelvin\n",
           Fahrenheit, Celsius, Kelvin);                         //3rd to learn: a better way to say it 
}