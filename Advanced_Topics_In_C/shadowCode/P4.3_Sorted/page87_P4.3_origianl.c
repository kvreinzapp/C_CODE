#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *next;
} Node, *NodePtr;

int main(void)
{
    void printList(NodePtr);
    NodePtr addInPlace(NodePtr, int);
    int n;
    NodePtr top = NULL;
    while (0 != scanf("%d", &n))
    {
        top = addInPlace(top, n);
    }
    printList(top);
} // end main

NodePtr addInPlace(NodePtr top, int n)
{
    NodePtr curr, np, prev, makeNode(int);

    np = makeNode(n);
    prev = NULL;
    curr = top;
    while (curr != NULL && n > curr->num)
    {
        prev = curr;
        curr = curr->next;
    }
    if (prev == NULL)
    {
        np->next = top;
        return np; // Just one statement will be enough
    }
    np->next = curr;
    prev->next = np;
    return top;
} // end addInPlace

NodePtr makeNode(int n)
{
    NodePtr np = (NodePtr)malloc(sizeof(Node));
    if (np == NULL)
        return NULL;
    np->num = n;
    np->next = NULL;
    return np;
}

void printList(NodePtr top)
{
    while (top != NULL)
    {
        printf("%d ", top->num);
        top = top->next;
    }
    puts("");
}