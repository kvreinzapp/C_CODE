// Write this one at tommorrow again
// Enter text to be analyzed (| to terminate):
/*a sample to run
Reason is a
powerful servant but
an inadequate master.
|
*/
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#define STOP '|'

    int main(void)
{
    char ch;
    char prev='\n';

    int n_chars=0;
    int n_lines = 0;
    int n_words=0;
    int p_lines=0;

    bool inword=false;

    printf("Enter text to be analyse(Enter '|' to qiut): \n");
    while ((ch=getchar())!=STOP)
    {
        n_chars++;

        if(ch =='\n')
            n_lines++;

        if(!isspace(ch) && (!inword)){
            inword = true;
            n_words++;
        }
        if(isspace(ch)&&inword)
            inword=false;

        prev=ch; 
    }
    if(prev!='\n')
        p_lines=1;
    
    printf("characters=%d, line=%d, words=%d, partial lines=%d\n",
            n_chars,n_lines,n_words,p_lines);

    return 0;
}