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

int sumOfLinkedList(struct Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

// Recursive function for sum of linked lists
int recursiveSumOfLinkedList(struct Node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    else
    {
        return recursiveSumOfLinkedList(p->next) + p->data;
    }
}

int main()
{

    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    printf("Linked list is \n");
    display(first);

    printf("\n");

    printf("The sum of elements is : %d", sumOfLinkedList(first));

    printf("\n");

    printf("The sum of elements using recursive is : %d", recursiveSumOfLinkedList(first));
    return 0;
}