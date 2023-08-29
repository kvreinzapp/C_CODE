/*Write a function that sets each element in an array to the sum of the corresponding
elements in two other arrays. That is, if array 1 has the values  2 , 4,  5, and 8 and array 2
has the values  1,  0,  4, and  6, the function assigns array 3 the values  3,  4,  9, and  14
. The function should take three array names and an array size as arguments. Test the function
in a simple program.   */
#include <stdio.h>
#include "Chapter10.h"
#define LEN 4
void sum_of_2array(double ar1[], double ar2[], double res[], int n);
int main(void)
{
    double first[LEN] = {2, 4, 5, 8};
    double second[LEN] = {1, 0, 4, 6};
    double result[LEN];

    printf("Your first array is: ");
    show_arr(first, LEN);
    printf("Your second array is: ");
    show_arr(second, LEN);

    sum_of_2array(first, second, result, LEN);
    printf("The sum of 2 numbers is: ");
    show_arr(result, LEN);

    return 0;
}
void sum_of_2array(double ar1[], double ar2[], double res[], int n)
{
    for (int i = 0; i < n; i++)
    {
        res[i] = ar1[i] + ar2[i];
    }
}