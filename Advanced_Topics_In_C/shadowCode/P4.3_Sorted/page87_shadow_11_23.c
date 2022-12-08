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

    NodePtr top = NULL;
    int n;
    while (0 != scanf("%d", &n))
    {
        top = addInPlace(top, n);
    }
    printList(top);
}

NodePtr addInPlace(NodePtr top, int n)
{
    NodePtr makeNode(int);

    NodePtr curr, np, prev;
    np = makeNode(n);

    // Not appear in book
    //  if (top == NULL)
    //  {
    //      np->next = top;
    //      top = np;
    //      return top;
    //  }

    curr = top;
    prev = NULL;
    while (curr != NULL && n > curr->num)
    {
        prev = curr;
        curr = curr->next;
    }
    // if (curr == NULL)
    // {
    //     np->next = NULL;
    //     prev->next = np;
    //     return top;
    // }
    if (prev == NULL)
    {
        np->next = top;
        // top = np;
        // return top;
        return np;
    }
    np->next = curr;
    prev->next = np;
    return top;
}

NodePtr makeNode(int n)
{
    NodePtr np = (NodePtr)malloc(sizeof(Node));
    if (np == NULL)
        return NULL;
    np->num = n;
    np->next = NULL;
}

void printList(NodePtr top)
{
    while (top != NULL)
    {
        printf("%d ", top->num);
        top = top->next;
    }
    puts("");
} // end printList