#include <stdio.h>
void getnchar(void);
int main(void)
{
    int len;
    printf("Enter:");
    scanf("%d", &len);

    char sth;
    scanf("%c", &sth);
    putchar(sth);

    printf("Your input is %d.\n", len);

    return 0;
}

void getnchar(void)
{
    char sth;
    // sth = getchar();
    scanf("%c", &sth);
    putchar(sth);
}
