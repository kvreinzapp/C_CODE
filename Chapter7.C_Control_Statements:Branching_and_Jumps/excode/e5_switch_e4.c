/*Redo exercise 4 using a switch .  
*/
#include<stdio.h>
int main(void)
{
    char ch;
    int counter;

    printf("Enter your text here to anylase('#'to end): \n");
    while ((ch = getchar())!='#')
    {
       switch(ch)
       {
           case '.': printf("!");counter++;break;
           case '!': printf("!!");counter++;break;
           default : printf("%c",ch); 
       }
    }
    printf("\nThere %s %d %s of substitution.\n"
            , counter == 1 ? "is only" : "are" ,counter, counter == 1 ? "time" : "times");
    return 0;
}