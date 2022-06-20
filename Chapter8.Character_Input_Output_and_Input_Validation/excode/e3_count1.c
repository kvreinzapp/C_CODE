//a pretty simple one
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int low,up,other;
    low=up=other=0;
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
            low++;
        else if (isupper(ch))
            up++;
        else
        other++;
    }
    printf("Lowercase letters: %d\n"
           "Uppercase letters: %d\n"
           "Other characters: %d\n",
           low, up, other);
    return 0;
    
}