//it seems that &&inword is useless
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main(void)
{
    char ch;

    int char_c=0;
    int line_c=0;
    int nline_c = 0;
    int word_c=0;

    bool inword;

    while ((ch=getchar()) != STOP)
    {
        char_c++;

        if ('\n'==ch)
            line_c++;
        
        if(!isspace(ch))
            inword=true;

        if(isspace(ch))
            {
                inword=false;
                word_c++;
            }
    }
    
    if ((ch-1)!='\n')
            nline_c=1;

    printf("You have %d characters, %d lines and %d parial line, %d words\n"
            ,char_c,line_c,nline_c,word_c);

    return 0;
}