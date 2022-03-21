//Devise a program that counts the number of characters in its input up to the end of file.
#include<stdio.h>
int main(void)
{
    int ch;
    int counter;
    while (ch=getchar()!=EOF)
    {
        counter++;
    }
    printf("This text has %d characters.\n",counter);

    return 0;
    
}