#include <stdio.h>
#include <stdlib.h>

typedef struct listNode
{
    char data;
    struct listNode *nextNodePtr;
} Node;

typedef Node *NodePtr;

void insert(NodePtr *sPtr, char value);
void printList(NodePtr currentPtr);

int main(int argc, char const *argv[])
{
    NodePtr stratPtr = NULL;
    char item;

    while (scanf("%c",&item)!=EOF )
    {
        //printf("%s", "Enter a charater: ");
        //scanf(" %s", &item);
        insert(&stratPtr, item);
        printList(stratPtr);
    }
}

void insert(NodePtr *sPtr, char value)
{
    NodePtr newPtr = malloc(sizeof(Node));
    NodePtr previousPtr;
    NodePtr currentPtr;

    if (newPtr != NULL)
    {
        newPtr->data = value;
        newPtr->nextNodePtr = NULL;
        previousPtr = NULL;
        currentPtr = *sPtr;

        while (currentPtr != NULL && value > currentPtr->data)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextNodePtr;
        }

        if (previousPtr == NULL)
        {
            newPtr->nextNodePtr = *sPtr;
            *sPtr = newPtr;
        }
        else
        {
            previousPtr->nextNodePtr = newPtr;
            newPtr->nextNodePtr = currentPtr;
        }
    }
    else
    {
        printf("%c not inserted No memory available.\n", value);
    }
}

int isEmpty(NodePtr sPtr)
{
    return sPtr == NULL;
}

void printList(NodePtr currentPtr)
{
    if (isEmpty(currentPtr))
    {
        printf("List is empty.\n");
    }
    else
    {
        printf(" \n");
        while (currentPtr != NULL)
        {
            printf("%c ", currentPtr->data);
            currentPtr = currentPtr->nextNodePtr;
        }
        printf("\n");
    }
}
