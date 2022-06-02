/*
Modify and test the function in exercise 1 so that it stops after n
characters or after the first blank, tab, or newline, whichever comes
first. (Don’t just use  scanf() .)
*/
#include <stdio.h>
char *stop_char(char ar[], int n);
int main(void)
{
    int length;
    char *cat;
    char source[20];
    printf("How manny characters you wanna input?:");
    scanf("%d", &length);
    getchar(); // get rid of the '\n'
    puts("your input is:");
    cat = stop_char(source, length);
    if (cat == NULL)
        puts("I met,so i stop.\n");
    else
    {
        puts("your output is:");
        puts(source);
    }

    return 0;
}

char *stop_char(char ar[], int n) // just a for //if EOF, break and return NULL，That's all.
{
    int i;

    for (i = 0; i < n; i++)
    {
        ar[i] = getchar();
        if ((ar[i] == EOF) || (ar[i] == ' ') || (ar[i] == '\n') || (ar[i] == '\t'))
            break;
    }
    if ((ar[i] == EOF) || (ar[i] == ' ') || (ar[i] == '\n') || (ar[i] == '\t'))
    {
        if (ar[i] == ' ')
            printf("I met a blank.\n");
        else if (ar[i] == '\n')
            printf("I met a newline.\n");
        else if (ar[i] == '\t')
            printf("I met a tab.\n");
        else
            printf("Invalid inputs.\n");

        return NULL;
    }
    else
    {
        printf("Now %d %s is entered.\n", i, i > 1 ? "characters" : "character");
        ar[i] = '\0';
        return ar;
    }
}

void branch(char sth)
{
    if (sth == ' ')
        printf("I met a blank.\n");
    else if (sth == '\n')
        printf("I met a newline.\n");
    else if (sth == '\t')
        printf("I met a tab.\n");
}