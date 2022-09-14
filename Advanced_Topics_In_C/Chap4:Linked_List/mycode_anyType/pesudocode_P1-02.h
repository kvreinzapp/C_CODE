#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    void *dataPtr;
    struct node *link;
} Node, *NodePtr;

Node *createNode(void *itemData)
{
    Node *nodePtr = (Node *)malloc(sizeof(Node));
    nodePtr->dataPtr = itemData;
    nodePtr->link = NULL;
    return nodePtr;
}