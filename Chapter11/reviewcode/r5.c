#include <stdio.h>
char *pr(char *str);
int main(void)
{
    char *x;
    x = pr("Ho Ho Ho!");
    printf("%p, %p", pr, x);

    return 0;
}
char *pr(char *str)
{
    char *pc;
    pc = str;

    while (*pc)
        putchar(*pc++);
    do
    {
        putchar(*--pc);
    } while (pc - str);

    return pc;
}