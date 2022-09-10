#include <stdio.h>
#include <limits.h>
#include <time.h>

int main(void)
{
    time_t t = time(NULL);
    time_t biggest = 0x7FFFFFFF;
    printf("Now is: %s\n", ctime(&t));
    // printf("%s\n", asctime(gmtime(&t)));
    printf("Biggest is: %s\n", ctime(&biggest));

    double diff = difftime(biggest, t);
    printf("seconds:%25.2f\n", diff);
    printf("years  :%25.2f\nmonths :%25.2f\ndays   :%25.2f\nhours  :%25.2f\nminutes:%25.2f\n",
           diff / 60 / 60 / 24 / 30 / 12, diff / 60 / 60 / 24 / 30, diff / 60 / 60 / 24, diff / 60 / 60, diff / 60);
}