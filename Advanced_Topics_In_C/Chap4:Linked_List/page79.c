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
    NodePtr makeNode(int);

    NodePtr top = NULL;
    NodePtr last, np;
    int n;

    while (scanf("%d", &n) != 0)
    {
        np = makeNode(n);
        if (top == NULL)
            top = np;
        else
            last->next = np;
        last = np;
    }
    printList(top);
}

void printList(NodePtr np)
{
    while (np != NULL)
    {
        printf("%d ", np->num);
        np = np->next;
    }
    puts("");
}

NodePtr makeNode(int num)
{
    NodePtr np = (NodePtr)malloc(sizeof(Node));
    if (NULL == np)
        return np;
    np->num = num;
    np->next = NULL;
    return np;
}