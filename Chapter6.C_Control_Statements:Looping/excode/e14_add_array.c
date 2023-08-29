/*Write a program that creates two eight-element arrays of  doubles and uses a loop to let 
the user enter values for the eight elements of the first array.Have the program set the 
elements of the second array to the cumulative totals of the elements of the first array. 
For example, the fourth element of the second array should equal the sum of the first 
four elements of the first array, and the fifth element of the second array should equal 
the sum of the first five elements of the first array. (It’s possible to do this with nested
loops,  but by using the fact that the fifth element of the second array equals the fourth 
element of the second array plus the fifth element of the first array, you can avoid 
nesting and just use a single loop for this task.) Finally, use loops to display the contents
of the two arrays, with the first array displayed on one line and with each element of the 
second array displayed below the corresponding element of the first array. */
#include <stdio.h>
int main(void)
{
    const int SIZE=10;
    double first[SIZE], second[SIZE];

    printf("Enter %d number here: ",SIZE);

    for (int i = 0; i < SIZE; i++)
        scanf("%lf",&first[i]);

    /*classic error: we can't have first[8]
    second[0] = first[0];
    for (int i = 0; i < SIZE; i++)
    {
        second[i + 1] = second[i] + first[i + 1]; //当i=7，有first[8],发生数组越界，所以不能这么写
        //printf(" %f ", first[0]);
        //printf(" %f\n",second[i]);
       
    }*/

    second[0] = first[0];
    for (int i = 0; i < SIZE-1; i++)
        second[i + 1] = second[i] + first[i + 1];
   
        for (int i = 0; i < SIZE; i++)
            printf(" %f", first[i]);
    printf("\n");
    for (int i = 0; i < SIZE; i++)
        printf(" %f", second[i]);
    printf("\n");
    return 0;
}