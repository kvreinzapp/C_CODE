/*Write a program that reads characters from the standard input to end-of-file. For each
character, have the program report whether it is a letter. If it is a letter, also report
its numerical location in the alphabet. For example,  c  and  C  would both be letter 3.
Incorporate a function that takes a character as an argument and returns the numerical
location if the character is a letter and that returns  –1  otherwise.
*/
#include <stdio.h>
int isletter(char);

int main(void)
{
    char input;
    int position;
    printf("Enter charactors here:(ended by EOF) ");
    while (1)
    {
        input = getchar();
        position = isletter(input);
        if (position==EOF)
            break;
        printf("your input is %c, the location is %d.\n", input, position);
    }
    printf("Bye!\n");

    return 0;
}

int isletter(char ch)
{
    int location;
    if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c is a letter.\n", ch);
        location = ch-96;
        return location;
    }
    else if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c is a letter.\n", ch);
        location = ch-64;
        return location;
    }
    else
        return -1;
}