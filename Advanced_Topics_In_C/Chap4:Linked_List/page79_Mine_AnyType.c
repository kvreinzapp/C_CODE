/*  Q: So, is it any type?  */
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
        int *newData = (int *)malloc(sizeof(int)); // First change Type here
        if (1 != scanf("%d", newData))             // Second here
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
        printf("%d ", *(int *)np->dataPtr); // Third here
        np = np->link;
    }
    puts("");
}
