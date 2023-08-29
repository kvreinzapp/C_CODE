/* compare.c -- this will work */
#include <stdio.h>
#include <string.h> // declares strcmp()
#include <ctype.h>
#include "Chapter11.h"

#define ANSWER "GRANT"
#define SIZE 40

char *s_gets(char *st, int n);
void ToUpper(char *str);

int main(void)
{
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    ToUpper(try);
    while (strcmp(try, ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
        ToUpper(try);
    }
    puts("That's right!");
    return 0;
}

void ToUpper(char *str)
{
    while (*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}
