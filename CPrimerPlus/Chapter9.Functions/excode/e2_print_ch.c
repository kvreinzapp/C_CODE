/*Devise a function  chline(ch,i,j) that prints the requested character in columns i
through  j . Test it in a simple driver.
*/
#include <stdio.h>
#include <ctype.h>
void chline(char ch, int i, int j);
int main(void)
{
    char ch;
    int i,j;
    printf("Enter a character here: ");
    ch=getchar();
    printf("Enter to integers here: ");
    scanf("%d %d",&i,&j);
    chline(ch,i,j);
}

void chline(char ch, int i, int j)
{

    for (int m = 0; m < i; m++)
    {
        for (int n = 0; n < j; n++)
            putchar(ch);
        putchar('\n');
    }
}