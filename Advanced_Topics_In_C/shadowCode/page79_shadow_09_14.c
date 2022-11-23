#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node, *NodePtr;

int main()
{
    void printList(NodePtr);
    NodePtr makeNode(int);

    int num;
    NodePtr last, np;
    NodePtr top = NULL;

    while (0 != scanf("%d", &num))
    {
        np = makeNode(num);
        if (NULL == top)
        {
            top = np;
        }
        else
            last->next = np;
        last = np;
    }
    printList(top);
}

void printList(NodePtr ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    puts("");
}

NodePtr makeNode(int num)
{
    NodePtr ptr = (NodePtr)malloc(sizeof(Node));
    if (NULL == ptr)
    {
        return ptr;
    }
    ptr->data = num;
    ptr->next = NULL;
    return ptr;
}