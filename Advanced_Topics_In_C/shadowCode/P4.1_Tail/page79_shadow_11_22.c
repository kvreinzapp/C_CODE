// try this tomorrow
// please mark the wrong place using comment
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *next; // it's node, Not Node
} Node, *NodePtr;

int main(void)
{
    NodePtr makeNode(int);
    void printList(NodePtr);

    NodePtr top, np, last;
    top = NULL;
    int e;

    while (0 != scanf("%d", &e))
    {
        np = makeNode(e);
        if (top == NULL)
            top = np;
        else
            last->next = np;
        last = np;
    }
    printList(top);
}

NodePtr makeNode(int e)
{
    NodePtr np = (Node *)malloc(sizeof(Node));
    if (np == NULL)
        return NULL;
    np->num = e;
    np->next = NULL;
    return np;
}

void printList(NodePtr p)
{
    while (p != NULL)
    {
        printf("%d ", p->num);
        p = p->next;
    }
    puts("");
}
