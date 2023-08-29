/*
Design and test a function that fetches the next n characters from input (including
blanks, tabs, and newlines), storing the results in an array whose address is passed as an
argument.
*/
#include <stdio.h>
#include <string.h>
#include "Chapter11.h"

#define LEN 5
char *getnchar(char *st, int n);

int main(void)
{
    char input[LEN];
    char *check;

    check = getnchar(input, LEN - 1);
    while (check == NULL)
    {
        puts("Input invalid");
        check = getnchar(input, LEN - 1);
    }
    puts(input);
    puts("Done");

    return 0;
}

char *getnchar(char *str, int n)
{
    int i;
    int ch;

    for (i = 0; i < n; i++)
    {
        ch = getchar();
        if (str[i] != EOF)
            str[i] = ch;
        else
            break;
    }
    if (str[i] == EOF)
        return NULL;
    else
    {
        str[i] = '\0';
        return str;
    }
}