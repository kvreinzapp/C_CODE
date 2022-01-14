//figure out what happened when [intger overflow] [floating-point overflow] [[floating-point underflow]
#include<stdio.h>

#include <float.h>
#include <limits.h>
int main(void)
{
    //[intger overflow]
    int i= 2147483647;                           //2^31-1
    
    printf("%d %d %d\n",i,i+1,i+2);              //int overflow
    printf("%d\n",2*i);                          //+1 is .. ; +2 is ..; ...: +i is -2  it's same as before

    printf("%u\n", i);                           // %u <-- int            it works
    printf("%u\n\n", 2 * i);                     //                       it works too

    //[unsigned intger overflow]
    unsigned int j = 4294967295;

    printf("%u %u %u\n",j,j+1,j+2);              //unsigned int overlow
    printf("%u\n",2*j);                          //same before

    printf("%d\n", j);                           // %d <-- unsigned int   it doesn't work
    printf("%llu\n\n",2*j);                      //                       it doesn't work too

    /***********************************************************************************************************/

    //[floating-point overflow]
    float toobig=3.4e38* 100.0f;
    printf("%e\n", 3.4e38 + 10);                 //just add a little number will not overflow
    printf("%e\n\n",toobig);                     //like book say
    

    //[floating-point underflow]                 // it seems that e-38 is the minus,less than it will not trunck as book says.it's precison will change
    float toosamll=0.1234e-37/ 10;               //!!!not same as book
    printf("%e\n",toosamll);
    printf("%e\n", 0.1234e-10 / 10);             //!!!not same as book

    float why = 1.175494e-38 / 10;
    printf("%e\n\n", why);

    printf("The MAX int data is %d\n", INT_MAX);
    printf("The MIN int data is %d\n", INT_MIN);
    printf("The MAX float data is %e\n", FLT_MAX);
    printf("The MIN float data is %e\n", FLT_MIN);
    

    return 0;

}