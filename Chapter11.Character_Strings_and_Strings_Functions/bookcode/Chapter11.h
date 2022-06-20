#include <stdio.h>
#include <string.h>

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        while ((st[i] != '\n') && (st[i] != '\0'))
            i++;

        if (st[i] == '\n')
            st[i] = '\0';
        else // st[i] must equal to '\0
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

/* string-pointer-sorting function */

void stsrt(char *strings[], int num) // n is rows
{
    char *temp;                                  // temp is pointer
    int top, seek;                               // 2 counter
    for (top = 0; top < num - 1; top++)          // outer loop run 2 times
        for (seek = top + 1; seek < num; seek++) // inner lopp run 2 times too, why diff, because gonna use top
                                                 // like 0,1 ; 0,2 ; 0,3 ;
                                                 //      1,2; 1,3;
                                                 //      2,3
            if (strcmp(strings[top], strings[seek]) > 0) // postitive number means wrong order ("C" to "A" gives 1)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}
