#include <stdio.h> /* for NULL definition          */
#include <string.h>
#include "Chapter11.h"

char *strblk(const char *string);

int main(void)
{
    char *string;
    s_gets(string, 50);

    char *ptr;
    ptr = strblk(string);
    printf("%p\n", ptr);
}

char *strblk(const char *string)
{
    while (*string != ' ' && *string != '\0')
        string++; /* stops at first blank or null */

    if (*string == '\0')
        return NULL; /* NULL is the null pointer     */
    else

        return (char *)string;
}