#include <stdio.h>
#include <string.h>
#define SIZE 4
char *getnchar(char *st, int n);
int main(void)
{
    char ar[30];
    char *check;
    printf("Enter %d characters here: ", SIZE);
    check = getnchar(ar, SIZE);

    // while (check == NULL)
    // {
    //     puts("Invalid");
    //     check = getnchar(ar, SIZE);
    // }
    // puts(ar);

    if (check == NULL)
        puts("Wrong");
    else
        puts(ar);

    puts("Done.");

    return 0;
}

char *getnchar(char *st, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        st[i] = getchar();
        if (st[i] != EOF)
            st[i] = getchar();
        else
            break;
    }
    if (st[i] != EOF)
    {
        st[i] = '\0';
        return st;
    }
    else
    {
        return NULL;
    }
}