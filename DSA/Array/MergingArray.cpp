// #include <iostream>
// #include <cstdlib>

// using namespace std;

// class Array
// {

// private:
//     int *A;
//     int size;
//     int length;

// public:
//     Array(int size, int length, bool sorted = false)
//     {

//         this->size = size;
//         this->length = length;

//         A = new int[size];

//         if (sorted)
//         {
//             cout << "Enter ints in sorted manner" << endl;
//             for (int i = 0; i < length; i++)
//             {
//                 cout << "Enter element " << i << " : " << flush;
//                 cin >> A[i];
//             }
//         }
//         else
//         {
//             for (int i = 0; i < length; i++)
//             {

//                 int val;
//                 val = rand() % 100; // Random int in range 0 to 100

//                 // Generate random binary int and make value negative
//                 if (rand() % 2)
//                 {
//                     A[i] = -1 * val;
//                 }
//                 else
//                 {
//                     A[i] = val;
//                 }
//             }
//         }
//     }

//     int Get(int index)
//     {
//         if (index >= 0 && index < length)
//         {
//             return A[index];
//         }
//     }

//     void Set(int index, int x)
//     {
//         if (index >= 0 && index < length)
//         {
//             A[index] = x;
//         }
//     }

//     void display()
//     {
//         for (int i = 0; i < length; i++)
//         {
//             cout << A[i] << " ";
//         }
//         cout << endl;
//     }

//     Array Merge(Array &B)
//     {
//         Array C(length + B.length, length + B.length);
//         int i = 0;
//         int j = 0;
//         int k = 0;
//         while (i < length && j < B.length)
//         {
//             if (A[i] < B.Get(j))
//             {
//                 C.Set(k++, A[i++]);
//             }
//             else
//             {
//                 C.Set(k++, B.Get(j++));
//             }
//         }
//         for (; i < length; i++)
//         {
//             C.Set(k++, A[i]);
//         }
//         for (; j < B.length; j++)
//         {
//             C.Set(k++, B.Get(j));
//         }
//         return C;
//     }

//     ~Array()
//     {
//         delete[] A;
//     }
// };

// int main()
// {

//     Array X(10, 5, true);
//     Array Y(10, 4, true);

//     Array Z = X.Merge(Y);
//     Z.display();

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// using class
class ARRAY
{
private:
    int *A;
    int size;
    int length;

public:
    ARRAY()
    {
        size = 0;
        length = 0;
        A = new int(size);
    }
    ARRAY(int s)
    {
        size = s;
        length = 0;
        A = new int[size];
    }
    ~ARRAY()
    {
        delete[] A;
    }
    void CREATE_1()
    {
        cout << "Enter size of arr 1 : ";
        cin >> size;
        cout << "Enter length of arr 1 : ";
        cin >> length;
        for (int i = 0; i < length; i++)
        {
            cout << "Enter element at index " << i << " : ";
            cin >> A[i];
        }
        cout << endl;
    }
    void CREATE_2()
    {
        cout << "Enter size of arr 2 : ";
        cin >> size;
        cout << "Enter length of arr 2 : ";
        cin >> length;
        for (int j = 0; j < length; j++)
        {
            cout << "Enter element at index " << j << " : ";
            cin >> A[j];
        }
    }
    void DISPLAY()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    ARRAY MERGEING(ARRAY ar1, ARRAY ar2)
    {
        int i, j, k;
        i = j = k = 0;
        ARRAY *arr3;
        while (i < ar1.length && j < ar2.length)
        {
            if (ar1.A[i] < ar2.A[j])
            {
                arr3->A[k++] = ar1.A[i++];
            }
            else
            {
                arr3->A[k++] = ar2.A[j++];
            }
        }
        for (; i < ar1.length; i++)
        {
            arr3->A[k++] = ar1.A[i];
        }
        for (; j < ar2.length; j++)
        {
            arr3->A[k++] = ar2.A[j];
        }

        arr3->length = ar1.length + ar2.length;
        arr3->size = (sizeof(ARRAY));

        return *arr3;
    }
};
// using structure
struct Array
{
    int size;
    int length;
    int A[10];
};

Array *Merge(Array *arr1, Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3;
    cout << "The Merged Array is : ";
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }

    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = arr1->length + arr2->length;
    arr3->size = (sizeof(Array));

    return arr3;
}
void Display(struct Array obj)
{
    // cout << "The array is : " << endl;
    for (int i = 0; i < obj.length; i++)
    {
        cout << obj.A[i] << " ";
    }
    cout << endl;
}

int main()
{
    // struct Array arr1 = {10, 5, {2, 4, 6, 8, 15}};
    // Display(arr1);
    // struct Array arr2 = {10, 5, {3, 5, 6, 9, 12}};
    // Display(arr2);
    // struct Array *arr3;
    // arr3 = Merge(&arr1, &arr2);
    // Display(*arr3);
    // free(arr3->A);

    ARRAY arr1;
    ARRAY arr2;
    ARRAY obj;
    arr1.CREATE_1();
    arr1.DISPLAY();
    arr2.CREATE_1();
    arr2.DISPLAY();
    obj.MERGEING(arr1, arr2);
    obj.DISPLAY();

    return 0;
}