/*
Design and test a function that reads the first word from a line of input into an array
and discards the rest of the line.
It should skip over leading whitespace.
Define a word as asequence of characters with no blanks, tabs, or newlines in it. Use  getchar() , not
*/
#include <stdio.h>
char *getword(char *str);
int main(void)
{
    char input[10];
    while (getword(input) != NULL)
        puts(input);
    puts("Done.\n");

    return 0;
}

#include <ctype.h>
char *getword(char *str)
{
    int ch;
    char *orig = str;
    while (((ch = getchar()) != EOF) && (isspace(ch)))
        continue;
    if (ch == EOF)
        return NULL;
    else
        *str++ = ch;
    while ((ch = getchar()) != EOF && !isspace(ch))
        *str++ = ch;
    *str = '\0';
    if (ch == EOF)
        return NULL;
    else
    {
        while (getchar() != '\n')
            continue;
        return orig;
    }
}
