/*Write a program that creates an eight-element array of  ints and sets the elements to the 
first eight powers of 2 and then prints the values. Use a  for loop to set the values, and, 
for variety, use a  do while loop to display the values.  */
#include<stdio.h>
int main(void)
{
    const int VAL = 8;
    int powers[VAL];
    int i;

    for (i = 0, powers[0] = 1; i < VAL-1; i++)
        powers[i+1]=2*powers[i];

    i = 0;
    do{
        printf(" %d", powers[i++]); // powers[i++]is a better way
    }while(i<VAL);
    printf("\n");

    return 0;
} 