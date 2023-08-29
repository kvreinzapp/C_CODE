#include <stdio.h>
#include <string.h>
#include "Chapter11.h"

char *find_space(char *st);

int main(void)
{
    char *string;
    s_gets(string, 50);

    char *ptr;
    ptr = find_space(string);
    printf("%p\n", ptr);
}

char *find_space(char *st)
{

    while ((*st != ' ') && (*st != '\0'))
    {
        st++;
    }
    if (*st == ' ')
    {
        printf("Truely a space here\n");
        return st;
    }
    else
    {
        printf("Oops, no space here\n");
        return NULL;
    }
}