#include <stdio.h>
#include <string.h>
#include "Chapter11.h"

#define SIZE 30
#define BUGSIZE 13

int main(void)
{
    char flower[SIZE];
    char addon[] = "123456789 123456789 123456";
    char bug[BUGSIZE];
    int available;

    // printf("%ld\n", strlen("liy"));
    puts("What's your favorite flower?");
    s_gets(flower, SIZE);

    // printf("%ld\n", strlen(flower));
    // printf("%ld\n", sizeof(flower));

    if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
        strcat(flower, addon);

    puts(flower);

    // printf("%ld\n", strlen(flower));
    // printf("%ld\n", sizeof(flower));

    puts("What is your favorite bug?");
    s_gets(bug, BUGSIZE);

    available = BUGSIZE - strlen(bug) - 1;

    strncat(bug, addon, available);

    puts(bug);
    return 0;
}