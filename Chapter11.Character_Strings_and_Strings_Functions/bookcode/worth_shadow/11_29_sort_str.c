/* sort_str.c -- reads in strings and sorts them */
#include <stdio.h>
#include "Chapter11.h"
#include <string.h>

#define SIZE 81 /* string length limit, including \0  */

#define LIM 4 /* maximum number of lines to be read */

#define HALT "" /* null string to stop input          */

int main(void)
{

    char input[LIM][SIZE]; /* array to store input       */
    char *ptstr[LIM];      /* array of pointer variables */
    int ct = 0;            /* input count                */
    int k;                 /* output count               */

    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the Enter  key at a line's start.\n");

    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct]; /* set ptrs to strings        */
        ct++;
    }
    printf("now cdt is: %d", ct);
    stsrt(ptstr, ct); /* string sorter              */

    puts("\nHere's the sorted list:\n");

    for (k = 0; k < ct; k++)

        puts(ptstr[k]); /* sorted pointers            */

    return 0;
}
