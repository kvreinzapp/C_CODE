/* paint.c -- uses conditional operator */
#include <stdio.h>
#define COVERAGE 350 // square feet per paint can
int main(void)
{
    int square;
    int can;

    while (1==scanf("%d",&square))
    {
        can=square/COVERAGE;
        can += ((square % COVERAGE) == 0)?0:1;
        printf("You need %d %s\n",can,(can==1)?"can":"cans");
        printf("Enter new val, q to quit: ");
    }

    return 0;
}