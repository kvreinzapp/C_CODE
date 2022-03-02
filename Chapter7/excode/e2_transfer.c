/*Write a program that reads input until encountering #. Have the program print each
input character and its ASCII decimal code. Print eight character-code pairs per line.
Suggestion: Use a character count and the modulus operator ( % ) to print a newline
character for every eight cycles of the loop.
*/
#include<stdio.h>
int main(void)
{
    char ch;
    int count=0;
    const int SIZE=8;

    printf("Enter the texy to analyse here: \n");
    while ((ch=getchar())!='#')
    {
        if (ch == '\n'||ch=='\t')
            continue;

        printf("\'%c\'",ch);
        printf("-%03d ",ch);
        count++;
        if (count%SIZE==0)
            printf("\n");   
    }
    printf("\nDone!\n");
    return 0;
    
}