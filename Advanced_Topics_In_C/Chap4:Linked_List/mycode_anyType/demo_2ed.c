/*  This way didn't works too, cause dataPtr will be all the same    */
#include <stdio.h>
#include <stdlib.h>
#include "pesudocode_P1-02.h"

int main()
{
    void printList(NodePtr);

    NodePtr top = NULL;
    NodePtr last, np;
    int *newData = (int *)malloc(sizeof(int));
    int n = 1;
    if (1 != scanf("%d", newData))
        n = 0;
    while (0 != n)
    {
        np = createNode(newData);
        if (top == NULL)
            top = np;
        else
            last->link = np;
        last = np;

        int *newData = (int *)malloc(sizeof(int));
        if (1 != scanf("%d", newData))
            n = 0;
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
