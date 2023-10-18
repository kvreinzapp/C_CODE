/*Write a program that reads in a line of input and then prints the line in reverse order. 
You can store the input in an array of  char ; assume that the line is no longer than 255 
characters. Recall that you can use  scanf() with the  %c specifier to read a character at 
a time from input and that the newline character ( \n ) is generated when you press the 
Enter key.   */
#include<stdio.h>
#include<string.h>
int main(void)
{
    char line[255];
    int i=0;
    printf("Enter the char in a line : ");

    do{
        scanf("%c", &line[i]);
    }while('\n'!=line[i++]);//执行完i++后，i比数组长度多了一个1，所以下面的for要减2

    //printf("%zd %zd",sizeof(line),strlen(line));

    //printf("%c",line[i]);
    //printf("%c", line[i-1]);
    //printf("%c", line[i-2]);

    printf("The reverse char of the data: ");

    for (i=i-2; i >= 0; i--)  
    //very important thing/* 原下标 i 为最后一个字符的下标，初始化时 i-- 目的删除最后一个换行符 */
        printf("%c",line[i]);

        printf("\nDone!");

    return 0;
}