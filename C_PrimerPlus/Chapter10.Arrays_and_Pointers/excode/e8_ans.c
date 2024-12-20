/* Programming Exercise 10-8 */
#include <stdio.h>
#define LEN1 7
#define LEN2 3

void copy_arr(int ar1[], const int ar2[], int n);
void show_arr(const int[], int);

int main(void)
{
    int orig[LEN1] = {1, 2, 3, 4, 5, 6, 7};
    int copy[LEN2];

    show_arr(orig, LEN1);
    copy_arr(copy, orig + 2, LEN2);
    show_arr(copy, LEN2);

    return 0;
}

void copy_arr(int ar1[], const int ar2[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        ar1[i] = ar2[i];
}

void show_arr(const int ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", ar[i]);
    putchar('\n');
}