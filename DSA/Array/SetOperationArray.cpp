#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct SetOperation
{
    int A[10];
    int size;
    int length;
};

void Display(SetOperation arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

struct SetOperation *UnionOperation(struct SetOperation *arr1, struct SetOperation *arr2)
{
    int i, j, k;
    i = j = k = 0;
    cout << "Displaying Union" << endl;
    struct SetOperation *arr3 = (struct SetOperation *)malloc(sizeof(SetOperation));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            arr3->A[k++] = arr2->A[j++];
        }
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

struct SetOperation *Intersection(SetOperation *arr1, SetOperation *arr2)
{
    int i, j, k;
    i = j = k = 0;
    cout << "Displaying Intersention" << endl;
    SetOperation *arr3 = (SetOperation *)malloc(sizeof(SetOperation));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            i++;
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        else if (arr1->A[i] == arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

struct SetOperation *Differene(SetOperation *arr1, SetOperation *arr2)
{
    cout << "Displaying Difference " << endl;
    int i, j, k;
    i = j = k = 0;
    struct SetOperation *aar3 = (SetOperation *)malloc(sizeof(SetOperation));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            aar3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    for (; i < arr1->length; i++)
    {
        aar3->A[k++] = arr1->A[i];
    }
    aar3->length = k;
    aar3->size = 10;

    return aar3;
}

int main()
{
    struct SetOperation arr1 = {{2, 6, 9, 15, 25}, 10, 5};
    cout << "Array 1 : ";
    Display(arr1);
    // struct SetOperation arr = {10, 5 ,{3,5,7,8,9}};
    struct SetOperation arr2 = {{4, 6, 10, 15, 20}, 10, 5};
    cout << "Array 2 : ";
    Display(arr2);

    struct SetOperation *arr3;

    //  Displaying union
    arr3 = UnionOperation(&arr1, &arr2);
    Display(*arr3);
    // displaying intersection
    arr3 = Intersection(&arr1, &arr2);
    Display(*arr3);
    // displaying Difference
    arr3 = Differene(&arr1, &arr2);
    Display(*arr3);

    delete[] arr1.A;
    delete[] arr2.A;
    delete[] arr3->A;
    return 0;
}
