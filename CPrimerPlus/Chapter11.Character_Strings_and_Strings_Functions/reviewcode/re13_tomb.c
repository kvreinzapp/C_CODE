#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "Chapter11.h"

#define KEY "GRANT"
#define SIZE 50

void ToUpper(char *st);

int main(void)
{
    char string[SIZE];
    puts("Who's dead?");
    s_gets(string, SIZE);
    ToUpper(string);

    // if (strcmp(KEY, string) == 0)
    // {
    //     printf("You are right\n");
    // }
    // else
    //     printf("wrong\n");
    while (strcmp(KEY, string) != 0)
    {
        puts("wrong people");
        s_gets(string, SIZE);
        ToUpper(string);
    }
    puts("right man");

    return 0;
}

void ToUpper(char *st)
{
    while (*st)
    {
        // *st = toupper(*st++);
        *st = toupper(*st);
        st++;
    }
}