/*Write a program that reads input until encountering the # character and then reports
the number of spaces read, the number of newline characters read, and the number of all
other characters read.   */
#include<stdio.h>
int main(void)
{
    char ch;
    int sp=0;
    int ne=0;
    int ot=0;

    printf("Input the text to analyse here: \n");
    while((ch=getchar())!='#')
    {
        if (ch==' ')
            sp++;
        if(ch=='\n')
            ne++;
        ot++;   
    }
    printf("You have %d character, %d spaces, %d newlines.\n",ot,sp,ne);
    return 0;
}