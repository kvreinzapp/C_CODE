/*Use a copy function from Programming Exercise 2 to copy the third through fifth
elements of a seven-element array into a three-element array. The function itself need
not be altered; just choose the right actual arguments. (The actual arguments need not be
an array name and array size. They only have to be the address of an array element and a
number of elements to be processed.)
*/
#include <stdio.h>
#include "Chapter10.h"
#define S_LEN 7
#define T_LEN 3
int main(void)
{
    double source[S_LEN] = {1, 2, 3, 4, 5, 6, 7};
    double target[T_LEN];

    show_arr(source, S_LEN);
    // copy_ptrs(target, source + 2, source + 5);
    copy_arr(target, source + 2, T_LEN); // This way works too
    show_arr(target, T_LEN);

    return 0;
}