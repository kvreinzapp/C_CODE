#include<stdio.h>// good job!, almost approximately
int main(void)
{
    char ch;
    int i;

    printf("Enter sequence here: ");

    while ('.' != (ch = getchar()))
    {
        if (ch!='\''&&ch!='\"')
        {
            i++;
        }
        
    }
    printf("%d\n",i);

    return 0;
}