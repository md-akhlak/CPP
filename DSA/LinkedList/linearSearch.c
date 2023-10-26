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

// Iterative Linear search
struct Node *linearSearch(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

// Recursive Linear Search
struct Node *recursiveLinearSearch(struct Node *p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }
    if (key == p->data)
    {
        return p;
    }
    return recursiveLinearSearch(p->next, key);
}

//  This is is the improved version of the linear search
struct Node *moveToHeadinearSearch(struct Node *p, int key)
{
    struct Node *q = NULL;
    while (p != NULL)
    {

        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;

            return p;
        }
        q = p;
        p = p->next;
    }
}

// Drivers function
int main()
{

    int A[] = {6, 23, 4, 2, 8, 3, 7, 1, 89};
    create(A, 9);

    display(first);
    printf("\n");

    struct Node *temp;
    temp = linearSearch(first, 3);
    if (temp)
    {
        printf("The key is found : %d", temp->data);
    }
    else
    {
        printf("The key %d , is not found ");
    }
    printf("\n");
    display(first);
    printf("\n");

    struct Node *recTemp;

    recTemp = recursiveLinearSearch(first, 2);
    if (recTemp)
    {
        printf("The rec key is found : %d", recTemp->data);
    }
    else
    {
        printf("The rec key %d , is not found ");
    }
    // printf("\n");
    // display(first);
    printf("\n");

    //  This is is the improved version of the linear search
    struct Node *moveTemp;

    moveTemp = moveToHeadinearSearch(first, 7);
    moveTemp = moveToHeadinearSearch(first, 4);
    moveTemp = moveToHeadinearSearch(first, 2);
    if (moveTemp)
    {
        printf("The move key is found : %d", moveTemp->data);
    }
    else
    {
        printf("The move key %d , is not found ");
    }

    printf("\n");
    display(first);
    return 0;

}