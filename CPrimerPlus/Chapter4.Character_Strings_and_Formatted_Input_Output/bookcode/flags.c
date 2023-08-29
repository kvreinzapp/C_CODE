/* flags.c -- illustrates some formatting flags */
#include <stdio.h>
int main(void)
{
    printf("**%x**%X**%#X\n",31,31,31);
    printf("**%d**% d**% d\n", 42, 42, -42);
    printf("**%5d**%5.4d**%05d**%05.4d**\n", 7, 7, 7,7);

    return 0;
}