/*
Design and test a function like that described in Programming Exercise 3 except that it
accepts a second parameter specifying the maximum number of characters that can be
read.
*/
/* Programming Exercise 11-3 */
#include <stdio.h>
#define LEN 80
char *getword(char *str, int num);
int main(void)
{
    char input[LEN];

    while (getword(input, 5) != NULL)
        puts(input);
    puts("Done.\n");

    return 0;
}

#include <ctype.h>
char *getword(char *str, int num)
{
    int ch;
    int n = 1;
    char *orig = str;
    // skip over initial whitespace
    while ((ch = getchar()) != EOF && isspace(ch))
        continue;
    if (ch == EOF)
        return NULL;
    else
        *str++ = ch; // first character in word
                     // get rest of word
    while ((ch = getchar()) != EOF && !isspace(ch))
    {
        *str++ = ch;
        n++;
        if (n >= num)
            break;
    }

    *str = '\0';
    if (ch == EOF)
        return NULL;
    else
    {
        while (ch != '\n')
            ch = getchar();
        return orig;
    }
}