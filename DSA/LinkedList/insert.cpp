#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class InsertNode
{
public:
    int data;
    InsertNode *firstNode = NULL;
    InsertNode *next;

    InsertNode(int d)
    {
        data = d;
    }
    InsertNode() {}

    void create(int *A, int n)
    {
        InsertNode *t, *last;

        firstNode = new InsertNode();

        firstNode->data = A[0];
        firstNode->next = NULL;
        last->next = t;
        last = t;
    }

    void display()
    {
        InsertNode *p;
        while (p != NULL)
        {
            cout << " " << p->data <<endl;
            p = p->next;
        }
    }
};

int main()
{

    int newA[] = {0, 1, 2, 3, 4, 5};

    InsertNode A;
    A.create(newA, 4);
    A.display();

    return 0;
}
