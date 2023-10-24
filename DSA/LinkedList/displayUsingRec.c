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

void recusiveDisplay(struct Node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        recusiveDisplay(p->next);
    }
}
// time complexity : o(n);
// space complexity : o(n)



// it will print the linked list in reverse order
void recusiveDisplayFirst(struct Node *p)
{
    if (p != NULL)
    {
        recusiveDisplayFirst(p->next);
        printf("%d ", p->data);
    }
}
// time complexity : o(n);
// space complexity : o(n)

int main()
{

    int A[] = {2, 12, 4, 5, 7, 56, 12, 4, 6};

    create(A, 9);
    recusiveDisplay(first); // display in normal order
    printf("\n");
    recusiveDisplayFirst(first); // Display in reverse order

    return 0;
}