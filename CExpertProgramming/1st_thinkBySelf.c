#include <stdio.h>
#include <limits.h>
#include <time.h>

int main(void)
{
    time_t t = 0x7FFFFFFF;
    char *s = ctime(&t);
    printf("%s\n", s);
    printf("%s\n", asctime(gmtime(&t)));
}