/*Write a program that 
 *asks the user to enter the number of miles traveled and the number of gallons of gasoline consumed. 
 *It should then calculate and display the miles-per-gallon value, showing one place to the right of the decimal. 
 *Next, using the fact that one gallon is about 3.785 liters and one mile is about 1.609 kilometers, 
 *it should convert the mile-per-gallon value to a liters-per-100-km value,
 *the usual European way of expressing fuel consumption, 
 *and display the result, showing one place to the right of the decimal. 
 *Note that the U. S. scheme measures the distance traveled per amount of fuel (higher is better), 
 *whereas the European scheme measures the amount of fuel per distance (lower is better). 
 *Use symbolic constants (using  const  or  #define) for the two conversion factors.        
*/
#include<stdio.h>
#define LITTERS_PER_GALLON 3.785
#define KILOMETERS_PER__MILE 1.609

int main(void)
{
    //float miles;
    //float gallons;
    float range,oil;

    printf("What's the number of miles traveled?: ");
    scanf("%f",&range);
    printf("What's the number of gallons of gasoline consumed?: ");
    scanf("%f",&oil);
    
    printf("In UAS,your oil waer is (miles per gallon): %.1f M/G\n",range/oil);
    printf("In Europe,your oil wear is (liters-per-100-km): %.1f L/100KM\n",
            LITTERS_PER_GALLON*oil/100*KILOMETERS_PER__MILE*range);

    return 0;
}