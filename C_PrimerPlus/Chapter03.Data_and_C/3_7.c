//ask for the height in centimeters and convert that to inches
#include<stdio.h>
#define CENTIMETERS_PER_INCH 2.54

int main(void)
{
    float heights;               // double heights would fail in scanf

    printf("what's your height in centimeters? : ");
    scanf("%f",&heights);
    printf("your heights in inches is: %f\n",heights/CENTIMETERS_PER_INCH);

    return 0;
}