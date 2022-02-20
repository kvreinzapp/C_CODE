  #include <stdio.h>
  int main(void)
  {                                      /* line 3  */
    int i, j, list[10];                  /* line 4  */

    for (i = 0; i <  10;  i++)           /* line 6  */
    {                                    /* line 7  */
        list[i] = 2*i + 3;               /* line 8  */
        for (j = 1; j <= i; j++)         /* line 9  */
            printf(" %d", list[j]);      /* line 10 */
        printf("\n");                    /* line 11 */
    }

    return 0;
  }

 