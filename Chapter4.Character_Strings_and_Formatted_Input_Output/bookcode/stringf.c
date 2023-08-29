/* stringf.c -- string formatting */
#include <stdio.h>
#include <string.h>
#define BLURB "Authentic imitation!"

int main(void)
{
    printf("the phrase has %zd letters,and occupies %zd memory cells.\n",
           strlen(BLURB),sizeof BLURB);  // type portability --page 117

    printf("[%2s]\n", BLURB);  
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB); //same like int
    printf("[%-24.5s]\n", BLURB);

    return 0;
}