#include<stdio.h>
#include<ctype.h>
#define SPACE ' '
int main(void)
{
    char ch;

    while ((ch = getchar())!= '\n')
    {
        if (0==isalpha(ch))
            putchar(ch);
        else
            putchar(ch+1);
    }
    putchar(ch);

    return 0;
    
}