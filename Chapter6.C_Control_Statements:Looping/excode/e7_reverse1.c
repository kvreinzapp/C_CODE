/*Write a program that reads a single word into a character array and then prints the word 
backward. Hint: Use  strlen()  ( Chapter   4   ) to compute the index of the last character in 
the array.    */
#include<stdio.h>
#include<string.h>
int main(void)
{
    char word[30];
    char back[30];
    int i,l;

    printf("Enter a single word here: ");
    scanf("%s",word);
    l = strlen(word);

    printf("%d\n",l);

        for (i = 0; i < l; i++)
            back[i] = word[l-i-1];

    printf("Your word is %s.\n", word);
    printf("Print it backward is %s.\n",back);

    return 0;
}
/*Here's a better way:
for (int i = strlen(word) - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");
     //逆序打印，下标值通过strlen()函数获得。strlen()返回的长度值
     //不包含'\0',但是数组下标从0～(长度-1)
*/

