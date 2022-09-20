/*  Q: Can we enter node without caring about length?   */
/*   So the key point is count the scanf or jump out of the loop!!!!    */
#include <stdio.h>
#include <stdlib.h>
#include "pesudocode_P1-02.h"

int main()
{
    void printList(NodePtr);

    NodePtr top = NULL;
    NodePtr last, np;

    while (1)
    {
        int *newData = (int *)malloc(sizeof(int));
        if (1 != scanf("%d", newData))
            break;
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
