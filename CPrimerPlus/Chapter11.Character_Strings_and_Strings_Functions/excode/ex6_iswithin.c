/*
Write a function called  is_within()
that takes a character and a string pointer as its two
function parameters. Have the function return a nonzero value (true) if the character is
in the string and zero (false) otherwise. Test the function in a complete program that uses
a loop to provide input values for feeding to the function.
*/
#include <stdio.h>
int is_within(char e, char *str);
int main(void)
{
    char food[8] = "applepie";
    char bug = 'l';
    if (is_within(bug, food))
    {
        printf("You're right. There is a \'%c\' in \"%s\"\n", bug, food);
    }

    return 0;
}

int is_within(char e, char *str)
{
    int mark = 0;
    while (*str)
    {
        if (*str++ != e)
            mark = 1;
    }
    return mark;
}