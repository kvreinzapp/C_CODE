#include<stdio.h>
int main(void)
{
    char ch;

    printf("Enter here: ");

    scanf("%c", &ch);
    
    while (ch != 'q')
    {
        printf("Your input is %c\n", ch);
        scanf("%c", &ch);
        if (ch=='\n')
        {
            scanf("%c", &ch);
        }
        
    }
}