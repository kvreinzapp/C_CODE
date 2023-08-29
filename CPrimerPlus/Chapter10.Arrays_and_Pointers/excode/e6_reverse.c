/*Write a function that reverses the contents of an array of  double
 and test it in a simple program.
*/
#include <stdio.h>
#include "Chapter10.h"
#define LEN 12
int main(void)
{
    double orig[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 23};
    show_arr(orig, LEN);
    reverse(orig, LEN);
    show_arr(orig, LEN);

    return 0;
}