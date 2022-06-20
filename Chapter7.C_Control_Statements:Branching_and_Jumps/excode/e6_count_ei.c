/*Write a program that reads input up to  # and reports the number of times that the
sequence  ei occurs.
Note
The program will have to “remember” the preceding character as well as the current character.
Test it with input such as “Receive your eieio award.”
*/
#include <stdio.h>
int main(void)
{
    char c_ch, p_ch;
    int counter;

    printf("Enter your text to analyse here: \n");

    while ((c_ch = getchar()) != '#')
    {
        if (c_ch == '\n')
            continue;

        if ((c_ch == 'i') && (p_ch == 'e'))
        {
            counter++;
        }
        p_ch = c_ch;
    }

    printf("%d \'ei\' occurs\n", counter);
    return 0;
}