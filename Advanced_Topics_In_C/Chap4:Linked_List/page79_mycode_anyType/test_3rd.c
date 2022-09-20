// Q: How about in function like while?
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    while (i-- > 0)
    {
        int *newData = (int *)malloc(sizeof(int));
        printf("%p\n", newData);
        free(newData); // Whether I free it or not really mattars.
    }
}
/* A: if I don't free it inside, it's gonna be two different address forever;  */
/*    But if i did it every loop's end, they gonna be the same addrass;       */
/*    It's also clear to see that for int type, every adrass is gaped with 32 bit, whitch is 4 bytes.*/
/*    And it's also seems that while didn't automatically free the adrass which you malloced.        */