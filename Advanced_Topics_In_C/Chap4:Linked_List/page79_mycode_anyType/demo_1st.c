/*  Q: Can I do this like before, put the scanf in while?   */
#include <stdio.h>
#include <stdlib.h>
#include "pesudocode_P1-02.h"

int main()
{
    void printList(NodePtr);

    NodePtr top = NULL;
    NodePtr last, np;

    int *newData = (int *)malloc(sizeof(int));
    // printf("Outer: %p\n", newData);
    while (scanf("%d", newData) != 0)
    {
        np = createNode(newData);
        // printf("Now np's value is %d\n", *(int *)np->dataPtr);
        // printf("Now np is %p\n", np);
        // printf("Now top is %p\n", top);
        if (top == NULL)
            top = np;
        else
            last->link = np;
        last = np;
        // printf("NodeVal:%d\n", *(int *)last->dataPtr);
        int *newData = (int *)malloc(sizeof(int));
        // printf("Inner: %p\n", newData);
    }
    // printf("Now top is %p\n", top);
    // printf("Now top's next is %p\n", top->link);
    // printf("Now top's value is %d\n", *(int *)top->dataPtr);
    // printf("Now np's value is %d\n", *(int *)np->dataPtr);
    printList(top);
}

void printList(NodePtr top)
{
    while (top != NULL)
    {
        // printf("PrintInner: %p\n", top);
        printf("%d ", *(int *)top->dataPtr);
        // printf("Now top's next is %p\n", top->link);
        // printf("%d ", *(int *)top->link->dataPtr);
        // printf("PrintNodeVal:%d\n", *(int *)top->dataPtr);
        top = top->link;
    }
    puts("");
}
/*  A: No, you can't. Cause the outer definition gonna cause the inner loop's dataPtr never to be changed,
    Which cause data ganna be same. The way like this is just can't work out.
    Meanwhile, gdb actually better than printf  */