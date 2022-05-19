#include <stdio.h>
#include <string.h>

int main(void)
{
    char sth[5];
    char *check;
    check = fgets(sth, 5, stdin);
    if (check == NULL)
    {
        puts("Are you crazy?");
    }

    return 0;
}