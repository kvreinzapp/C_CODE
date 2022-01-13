//figure out what happened when [intger overflow] [floating-point overflow] [[floating-point underflow]
#include<stdio.h>
int main(void)
{
    //[intger overflow]
    int i= 2147483647;
    
    printf("%d %d %d\n",i,i+1,i+2);              //int overflow
    printf("%d\n",2*i);                          //+1 is .. ; +2 is ..; ...: +i is -2  it's same as before

    printf("%u\n", i);                           // %u <-- int            it works
    printf("%u\n\n", 2 * i);                       //                       it works too

    /***********************************************************************************************************/
    unsigned int j = 4294967295;

    printf("%u %u %u\n",j,j+1,j+2);              //unsigned int overlow
    printf("%u\n",2*j);                          //same before

    printf("%d\n", j);                           // %d <-- unsigned int   it doesn't work
    printf("%llu\n\n",2*j);                      //                       it doesn't work too

    //[floating-point overflow]
    float toobig=3.4e38* 100.0f;
    printf("%e\n\n",toobig);                    //like book say

    //[floating-point underflow]
    float toosamll=0.1234e-40 / 10;             //!!!not same as book
    printf("%e\n",toosamll);

    return 0;
}