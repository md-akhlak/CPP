#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;

} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));

    first->data = A[0];
    first->next = NULL;

    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int count(struct Node *p)
{
    int c = 0;
    while (p)
    {
        c++;
        p = p->next;
    }
    return c;
}

// Using Recursion

int recCount_1(struct Node *p)
{
    if (p == 0)
        return 0;
    else
        return recCount_1(p->next) + 1;
}
int recCount_2(struct Node *p)
{
    int x = 0;
    if (p)
    {
        x = recCount_2(p->next);
        return x + 1;
    }
    else
        return x;
}

int main()
{

    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    printf("Linked list is \n");
    display(first);

    printf("\n");

    printf("Node is : %d", count(first));

    printf("\n");
    printf("Counting Node using recursion is \n");

    printf("Node is : %d", recCount_1(first));

    printf("\n");

    printf("Node is : %d", recCount_2(first));

    return 0;
}