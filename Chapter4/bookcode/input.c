//when to use &
#include<stdio.h>
int main(void)
{
    int age;        //variable
    float assets;   //variable
    char pet[30];   //string

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%x %e",&age,&assets);        //use & here
    scanf("%s",pet);                    //no & for char array
    printf("%d $%.2f %s\n",age,assets,pet);

    return 0;

}
