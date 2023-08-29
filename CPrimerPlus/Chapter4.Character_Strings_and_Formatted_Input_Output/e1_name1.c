//Write a program that asks for your first name, your last name,
//and then prints the names in the format last, first
#include<stdio.h>
int main(void)
{
    char f_name[10];
    char l_name[10];

    printf("Enter your first and last name:\n");
    scanf("%s %s",f_name,l_name);
    printf("%s %s will be your name.\n",l_name,f_name);

    return 0;
}