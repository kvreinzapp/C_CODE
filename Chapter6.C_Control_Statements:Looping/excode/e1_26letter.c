/*Write a program that creates an array with 26 elements and stores the 26 lowercase 
letters in it. Also have it show the array contents.  */
#include<stdio.h>
#define SIZE 26           //the number of the elements
/*int main(void)
{
    char letter[26];
    int i=0;

    for(letter[i]='a';i<26;i++)
        printf("%c",letter[i]);

    return 0;

}*/
int main(void)
{
    char letter[SIZE];
    char val;
    int i;

    for(i=0,val='a';i<SIZE;i++,val++)
    {
        letter[i]=val;
        printf("%c", letter[i]);
    }
    printf("\n");

    return 0;

}