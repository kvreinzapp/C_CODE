/*
Design and test a function that fetches the next n characters from input (including
blanks, tabs, and newlines), storing the results in an array whose address is passed as an
argument.
*/
#include <stdio.h>
char *fetch(char *ar, int n);
int main(void)
{
    char *sign;
    char source[40];

    puts("Enter here:");
    sign = fetch(source, 5);
    if (sign == NULL)
    {
        printf("Invalid input\n");
    }
    else
    {
        puts("Result is bellow:");
        puts(source);
    }

    return 0;
}

char *fetch(char *ar, int n)
{

    int i = 0;

    for (; i < n; i++)
    {
        ar[i] = getchar();
        if (ar[i] == EOF)
        {
            printf("Opps\n");
            break;
        }
    }
    if (ar[i] == EOF) // only one branch
    {
        return NULL;
    }
}