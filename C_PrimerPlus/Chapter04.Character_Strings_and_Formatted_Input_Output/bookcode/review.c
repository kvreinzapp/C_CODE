//For my review questions
#include<stdio.h>
#include<string.h>
#define BOOK "War and Peace"
int main(void)
{
    float cost=12.99;
    float percent=80.0;

    printf("This copy of \"%s\" sells for $%.2f.\n",BOOK,cost); //or %0.2f
    printf("That is %.f%% of list.\n",percent);                 //or %0.0f

    printf("*%06d*\n",444);

    //9th review question
    //For each of the following input lines, provide a scanf() statement to read it. Also
    //declare any variables or arrays used in the statement.

    int a;
    scanf("%d",&a);
    printf("%d\n",a);

    float b,b1;
    scanf("%f %e",&b,&b1);
    printf("%.2f %.2E\n", b, b1);

    char c[40];
    scanf("%s",c);
    printf("%s\n",c);

    char action[40];
    int value;
    scanf("%s %d", action,&value);
    printf("%s %d\n", action,value);

    int val;
    scanf("%*s %d", &val);
    printf("%d\n", val);

    //11-- a pretty good question
    printf("The double type is %zd bytes..\n", sizeof(double));

    return 0;
}