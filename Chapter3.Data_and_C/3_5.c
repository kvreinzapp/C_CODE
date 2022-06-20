//print my ages as seconds
#include<stdio.h>
#define SEC_PER_YERA 3.156e7

int main(void)
{
    int ages;

    printf("i have been living for __ years.\b\b\b\b\b\b\b\b\b");
    scanf("%d",&ages);
    
    printf("it's same to say that you have been living for %f seconds.\n",ages*SEC_PER_YERA);

    return 0;
}