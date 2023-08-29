/*Write a function that returns the largest value stored in an array-of- int
. Test the function in a simple program.
*/
#include <stdio.h>
double fd_largest(double s[], int n);
int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 7.7, 4.4, 5.5, 6.6};
    double max = fd_largest(source, 7);
    printf("The largest number in this array is %g\n", max);

    return 0;
}
// a typical wrong way, see the right way in e3_ans.c
// You overide the array bound, so there gonna be some strange number here
double fd_largest(double s[], int n)
{
    double largest;
    largest = s[0];
    for (int i = 0; i < n; i++)
    {
        if (s[i + 1] > largest)
            largest = s[i + 1];
    }
    return largest;
}