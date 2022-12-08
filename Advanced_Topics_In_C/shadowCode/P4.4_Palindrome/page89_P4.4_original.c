#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    char ch;
    struct node *next;
} Node, *NodePtr;

int main()
{
    NodePtr getPhrase();
    NodePtr reverseLetters(NodePtr);
    int compare(NodePtr, NodePtr);
    NodePtr phrase, s1, s2;

    printf("Type a phrase.(To stop, press \"Enter\" only):");
    phrase = getPhrase();
    while (phrase != NULL)
    {
        s1 = reverseLetters(phrase);
        s2 = reverseLetters(s1);
        if (0 == compare(s1, s1))
            printf("is a palindrome.\n");
        else
            printf("is not a palindrome.\n");
        printf("Type a phrase.(To stop, press \"Enter\" only):");
        phrase = getPhrase();
    }
} // end main

NodePtr getPhrase(void)
{
    NodePtr top = NULL, makeNode(char), np, last;
    char c = getchar();
    c = getchar();
    while (c != '\n')
    {
        np = makeNode(c);
        if (top == NULL)
            top = np;
        else
            last->next = np;
        last = np;
        c = getchar();
    }
    return top;
} // end getPhrase

NodePtr makeNode(char c)
{
    NodePtr np = (NodePtr)malloc(sizeof(Node));
    if (np == NULL)
        return NULL;
    np->next = NULL;
    np->ch = c;
    return np;
}

NodePtr reverseLetters(NodePtr top)
{
    NodePtr rev = NULL, np;
    while (top != NULL)
    {
        if (isalpha(top->ch))
        {
            np = makeNode(tolower(top->ch));
            np->next = rev;
            rev = np;
        }
        top = top->next;
    }
    return rev;
} // end reverseLetters

int compare(NodePtr s1, NodePtr s2)
{
    // return -1 if s1 < s2, +1 if s1 > s2 and 0 if s1 = s2
    while (s1 != NULL)
    {
        if (s1->ch < s2->ch)
            return -1;
        else if (s1->ch > s2->ch)
            return 1;
        s2 = s2->next;
    }
    return 0;
} // end compare

void printList(NodePtr top)
{
    while (top != NULL)
    {
        printf("%c", top->ch);
        top = top->next;
    }
    puts("");
}