//2-4--B:repeat something using function
#include<stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly (void)
{
    printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
    printf("Which no body can deny!\n");
}