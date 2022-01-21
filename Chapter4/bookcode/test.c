//
#include<stdio.h>
#define PAGES 959

int main(void)
{
    printf("*%d*\n",PAGES);       //use ** to show the field is a good idea
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}
