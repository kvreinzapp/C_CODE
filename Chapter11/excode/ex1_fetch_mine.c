#include <stdio.h>
char *fetch_char(char ar[], int n);
int main(void)
{
    char *cat;
    char source[20];
    cat = fetch_char(source, 10);
    puts(source);

    return 0;
}

char *fetch_char(char ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        ar[i] = getchar();
        if (ar[i] == EOF)
            break;
    }
    if (ar[i] == EOF)
    {
        return NULL;
    }
    else
    {
        printf("Now i is %d\n", i);
        ar[i] = '\0';
        return ar;
    }
}