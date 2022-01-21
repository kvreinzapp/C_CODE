//use defined constants from limits.h and float.h
#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
    printf("some numnber lmits in this system:\n");
    printf("biggest int: %d\n",INT_MAX);
    printf("smallest long long: %lld\n",LLONG_MIN);
    printf("one byte equals to %d bits on this system.\n",CHAR_BIT);
    printf("largest double: %e\n",DBL_MAX);
    printf("smallest normal float: %e\n",FLT_MIN);
    printf("float precision = %d digets\n",FLT_DIG);
    printf("float epsilon = %e\n",FLT_EPSILON);
    
    return 0;
}