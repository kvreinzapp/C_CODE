#include <stdio.h>
#include <string.h>
#include "Chapter11.h"

int main(void)
{
    // Both way works
    //  char sth[] = "apple";
    // char *sth = "apple";

    // char sth[3];
    // s_get_chr(sth, 5);
    // puts(sth);

    // char sth[] = "apple";
    // char *ptr;
    // ptr = strchr(sth, 'p');
    // printf("%p", ptr);

    char sth[10];
    s_get(sth, 5);
    puts(sth);

    return 0;
}