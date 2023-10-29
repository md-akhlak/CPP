#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *nextAdd;
} *firstNode = NULL; 

void create(int *A, int n)
{
    int i;
    struct Node *t, *last;

    firstNode = (struct Node *)malloc(sizeof(struct Node));

    firstNode->data = A[0];
    firstNode->nextAdd = NULL;

    last = firstNode;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));

        t->data = A[i];
        t->nextAdd = NULL;
        last->nextAdd = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->nextAdd;
    }
}

int countNodes(struct Node *p)
{
    int count = 0;
    while (p)
    {
        count++;
        p = p->nextAdd;
    }
    return count;
}

void insertNode(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;

    if (index < 0 || index > countNodes(p))
    {
        return;
    }

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;

    if (index == 0)
    {
        t->nextAdd = firstNode;
        firstNode = t;
    }

    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->nextAdd;
        }
        t->nextAdd = p->nextAdd;
        p->nextAdd = t;
    }
}

int main()
{

    int A[] = {32, 5, 6, 7};

    create(A, 4);

    display(firstNode);

    printf("\n");

    printf("%d ", countNodes(firstNode));

    printf("\n");
    insertNode(firstNode, 0, 2);
    display(firstNode);
    printf("\n");
    printf("Now the no. of node is : %d", countNodes(firstNode));

    printf("\n");
    insertNode(firstNode, 5, 10);
    display(firstNode);
    printf("\n");
    printf("Now the no. of node is : %d", countNodes(firstNode));

    printf("\n");
    insertNode(firstNode, 2, 10);
    display(firstNode);
    printf("\n");
    printf("Now the no. of node is : %d", countNodes(firstNode));

    // insertNode(firstNode , 0 , 10);
    // display(firstNode);
    // printf("\n");
    // insertNode(firstNode , 1 , 20);
    // display(firstNode);
    // printf("\n");
    // insertNode(firstNode , 2 , 30);
    // display(firstNode);
    // printf("\n");
    // insertNode(firstNode , 3 , 40);
    // display(firstNode);
    // printf("\n");

    // printf("%d ", countNodes(firstNode));

    return 0;
}