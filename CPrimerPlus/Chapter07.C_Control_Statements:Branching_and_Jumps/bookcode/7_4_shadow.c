#include<stdio.h>
#define RATE1 0.13230 // rate for first 360 kwh
#define RATE2 0.15040 // rate for next 108 kwh
#define RATE3 0.30025 // rate for next 252 kwh
#define RATE4 0.34025 // rate for over 720 kwh
#define BREAK1 360.0 // first breakpoint for rates
#define BREAK2 468.0 // second breakpoint for rates
#define BREAK3 720.0 // third breakpoint for rates

#define BASE1 BREAK1*RATE1
#define BASE2 BASE1+(BREAK2-BREAK1) *RATE2
#define BASE3 BASE1+BASE2+(BREAK3-BREAK2)*RATE3
int main(void)
{
    double kwh;
    double fee;
    printf("Enter the kwh you used here: ");
    scanf("%lf",&kwh);
    if (kwh<=BREAK1)
            fee=RATE1*kwh;
        else if (kwh<=BREAK2)
            fee=BASE1+(kwh-BREAK1)*RATE2;
        else if (kwh<=BREAK3)
            fee = BASE2+(kwh - BREAK2) * RATE3;
        else  
            fee = BASE3 +(kwh - BREAK3) * RATE4;
    printf("You use %.1f kwhs and it costs $%1.2f\n",kwh,fee);
    return 0;
    
}