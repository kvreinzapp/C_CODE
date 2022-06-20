#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int hello;
    ch = getchar();
    hello = isspace(ch);

    printf("%d\n", hello);
}