/*  so the definition have to be appeared first in the while loop, instead of the outer one */
#include <stdio.h>
#include <stdlib.h>
#include "pesudocode_P1-02.h"

int main()
{
    void printList(NodePtr);

    NodePtr top = NULL;
    NodePtr last, np;
    int n = 3;

    while (n-- > 0)
    {
        int *newData = (int *)malloc(sizeof(int));
        scanf("%d", newData);
        np = createNode(newData);
        if (top == NULL)
            top = np;
        else
            last->link = np;
        last = np;
    }
    printList(top);
}

void printList(NodePtr np)
{
    while (np != NULL)
    {
        printf("%d ", *(int *)np->dataPtr);
        np = np->link;
    }
    puts("");
}
/*  In this way we kind of success, but still stucked by length.    */