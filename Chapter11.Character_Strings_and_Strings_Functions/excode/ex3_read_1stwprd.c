/*
Design and test a function that reads the first word from a line of input into an array and
discards the rest of the line. It should skip over leading whitespace. Define a word as a
sequence of characters with no blanks, tabs, or newlines in it. Use  getchar() , not
*/
#include <stdio.h>
char *read_1st_word(char ar[]);
int main(void)
{
    char input[20];
    char *cat;

    puts("Enter a line here:");
    while ((cat = read_1st_word(input)) != NULL)
    {
        puts(input);
    }
    puts("Done.\n");

    return 0;
}

char *read_1st_word(char ar[])
{
    int i = 0;
    ar[i] = getchar();
    while ((ar[i] != ' ') && (ar[i] != '\n') && (ar[i] != '\t'))
    {
        i++;
        ar[i] = getchar();

        if (ar[i] == EOF)
            break;
    }

    if (ar[i] == EOF)
        return NULL;
    else
    {
        ar[i] = '\0';
        while (getchar() != '\n')
            continue;
        return ar;
    }

    // }
}