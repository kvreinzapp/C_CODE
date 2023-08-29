#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int lettercase = 0;
    int wordcase = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {

        if ((ispunct(ch)) || ch == ' ' )
            wordcase++;
        else if (ch != '\n')
            lettercase++;
    }
    printf("Letters: %d\n"
           "Words: %d\n"
           "letters per word: %.2f\n",
           lettercase, wordcase, (double)lettercase / wordcase);

    return 0;
}