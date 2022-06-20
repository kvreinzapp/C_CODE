/*Using  if else statements, write a program that reads input up to  # , replaces each period 
with an exclamation mark, replaces each exclamation mark initially present with two 
exclamation marks, and reports at the end the number of substitutions it has made.   
*/
#include<stdio.h>
int main(void)
{
    char ch;
    int count;

    printf("Enter your text here to anylase ");
    while ((ch = getchar())!='#')
    {
        if (ch=='.')
        {
           putchar('!');
            count++; 
        } 
        else if(ch=='!')
        {
            printf("!!");
            count++;
        }   
        else
            putchar(ch);
    }
    printf("\nThere %s %d %s of substitution.\n"
            ,count,count==1?"is only":"are",count==1?"time":"times");
    return 0;
}