#include <stdio.h>
char get_first(void);
int main(void)
{
    int start = 1;
    int end = 100;
    int guess = (start + end)/2;
    char ch;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a h if my guess is high, an l");
    printf("\nif it is low and a y if it is correct.\n");
    printf("Uh...is your number %d?\n", guess);
    
    while ((ch = get_first()) != 'y') /* get response, compare to y */
    {   
        if (ch == 'l')
        {
            start=guess+1;
        }
        else if (ch == 'h')
        {
            end=guess-1;
        }
        else
            printf("Please enter 'h' 'l' or 'y'.\n");
        guess = ((start + end) / 2);
        printf("Well, then, is it %d?\n", guess);
    }

    printf("I knew I could do it!\n");
}

char get_first(void)
{
    char ch;
    ch=getchar();
    while ((getchar()) != '\n')
        continue;
    return ch;
    
}