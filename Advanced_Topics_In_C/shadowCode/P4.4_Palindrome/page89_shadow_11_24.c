#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    char data;
    struct node *next;
} Node, *NodePtr;

int main(void)
{
    NodePtr getPhrase(void), top, list1, list2;
    void printList(NodePtr);
    NodePtr reverseLetters(NodePtr);
    void compare(NodePtr, NodePtr);

    while (1)
    {
        printf("Type a phrase.(To stop, press \"Enter\" only):");
        top = getPhrase();
        if (top == NULL)
            break;
        list1 = reverseLetters(top);
        list2 = reverseLetters(list1);
        compare(list1, list2);
    }
}

NodePtr getPhrase(void)
{
    NodePtr top, makeNode(char), np, last;
    char ch;
    top = NULL;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        np = makeNode(ch);
        if (top == NULL)
            top = np;
        else
            last->next = np;
        last = np;
        scanf("%c", &ch);
    }
    return top;
}

NodePtr makeNode(char ch)
{
    NodePtr np = (NodePtr)malloc(sizeof(Node));
    if (np == NULL)
        return NULL;
    np->next = NULL;
    np->data = ch;
    return np;
}

NodePtr reverseLetters(NodePtr top)
{
    NodePtr newPtr, np;
    newPtr = NULL;
    while (top != NULL)
    {
        if (!ispunct(top->data) && ' ' != top->data)
        {
            np = makeNode(tolower(top->data));
            if (newPtr == NULL)
            {
                newPtr = np;
                top = top->next;
                continue;
            }
            np->next = newPtr;
            newPtr = np;
            top = top->next;
        }
        else
        {
            top = top->next;
        }
    }
    return newPtr;
}

void compare(NodePtr list1, NodePtr list2)
{
    while (list1 != NULL)
    {
        if (list1->data != list2->data)
        {
            puts("is not a palindrome");
            return;
        }
        list1 = list1->next;
        list2 = list2->next;
    }
    puts("is a palindrome");
}

void printList(NodePtr top)
{
    while (top != NULL)
    {
        printf("%c", top->data);
        top = top->next;
    }
    puts("");
}