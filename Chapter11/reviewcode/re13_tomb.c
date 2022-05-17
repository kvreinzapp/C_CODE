#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "Chapter11.h"

#define KEY "GRANT"

void *ToUpper(char *st);

int main(void)
{
    char string[70];
    s_gets(string, 50);
    ToUpper(string);

    if (strcmp(KEY, string) == 0)
    {
        printf("You are right\n");
    }
    else
        printf("wrong\n");

    return 0;
}

void *ToUpper(char *st)
{
    while (*st)
    {
        *st = toupper(*st++);
        // *st = toupper(*st);
        // st++;
    }
}