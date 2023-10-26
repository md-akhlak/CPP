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
// Fingi Max element in the linked list
int maxNumber(struct Node *p)
{
    /* The line `int max = __INT64_MAX__;` is initializing the variable `max` with the maximum value
    that can be stored in a 64-bit integer. The `__INT64_MAX__` is a predefined constant in C that
    represents the maximum value that can be stored in a 64-bit integer. */
    int max = 0;

    while (p)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
// Recursive function
int Rmax(struct Node *p)
{
    int x = 0;
    if (p == 0)
        return 0;
    else
    {
        x = Rmax(p->next);
        if (x > p->data)
            return x;
        else
            return p->data;
    }
}
// Ternary Operator
int recMax(struct Node *p)
{
    int x = 0;
    if (p == 0)
        return 0;
    x = Rmax(p->next);
    return x > p->data ? x : p->data;
}

int main()
{
    int A[] = {0, 1, 23, 5, 3, 4, 57, 23, 24, 2, 42, 7};
    create(A, 12);

    display(first);

    printf("\n");

    printf("The max element of the linked list is : %d ", maxNumber(first));
    printf("\n");
    printf("The max element of the linked list using rec is : %d ", Rmax(first));
    printf("\n");
    printf("The max element of the linked list using ternary operator is : %d ", recMax(first));

    return 0;
}