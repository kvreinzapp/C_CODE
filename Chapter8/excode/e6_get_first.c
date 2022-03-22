#include<stdio.h>
char get_first(void);
int main(void)
{
    char bag;
    bag=get_first();
    printf("What's in your bag: ");
    putchar(bag);

    return 0;
}

char get_first(void)
{
    char ch;
    ch=getchar();
    while ((ch==' ')||(ch=='\t')||(ch=='\n'))
    {
        ch=getchar();
    }
    while (getchar()!='\n')
        continue;
    return ch;
    
}