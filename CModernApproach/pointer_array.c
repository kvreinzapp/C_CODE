#include <stdio.h>
int main(void)
{
    char ar1[] = "Hello";
    char ar2[] = "Boy";
    char *p[2] = {ar1, ar2};
    printf("%s %s", p[0], p[1]);
    // int a = 12;
    // int b = 20;
    // int *p[2] = {a, b};
    // printf("%d %d", *p[0], *p[1]);
}