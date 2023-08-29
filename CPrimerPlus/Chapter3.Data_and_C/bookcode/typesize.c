//print out type sizes of my PC
#include<stdio.h>
int main(void)
{
    //int family
    //signed
    printf("Type int has a size of %zd bytes.\n",sizeof(int));
    printf("Type short has a size of %zd bytes.\n", sizeof(short));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    //unsigned
    printf("Type unsigned has a size of %zd bytes.\n", sizeof(unsigned));
    printf("Type unsigned short has a size of %zd bytes.\n", sizeof(unsigned short));
    printf("Type unsigned long has a size of %zd bytes.\n", sizeof(unsigned long));
    printf("Type unsigned long long has a size of %zd bytes.\n", sizeof(unsigned long long));


    
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
    
    return 0;

}