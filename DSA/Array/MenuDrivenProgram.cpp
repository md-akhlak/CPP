#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct MenuDriven
{
    int *A;
    int size;
    int length;
};
void Display(struct MenuDriven arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}
void Create(struct MenuDriven obj)
{
    cout << "Enter the size of array : ";
    cin >> obj.size;
    obj.length = 0;
    cout << "Enter the length of array : ";
    cin >> obj.length;
    for (int i = 0; i < obj.length; i++)
    {
        cout << "Enter element at index " << i << " : ";
        cin >> obj.A[i];
    }
}
void Insert(struct MenuDriven *ar)
{
    int index;
    cout << "Enter index : ";
    cin >> index;

    int n;
    cout << "Enter element to put on index " << index << " : ";
    cin >> n;

    if (index >= 0 && index <= ar->length)

        for (int i = ar->length; i > index; i--)
        {
            ar->A[i] = ar->A[i - 1];
        }
    ar->A[index] = n;
    ar->length++;
}

int Set(MenuDriven setObj)
{
    int index;
    int element;
    cout << "Enter the index you want change : ";
    cin >> index;
    cout << "Enter the new element for " << index << " : ";
    cin >> element;
    if (index >= 0 && index < setObj.length)
    {
        cout << "Now the element at index " << index << " is : ";
        return setObj.A[index] = element;
        cout << endl;
    }
    cout << endl;
    cout << "invalid index ";
}
int Max(struct MenuDriven maxObj)
{
    int max = maxObj.A[0];
    cout << "THe max element of the given Array is : ";
    for (int i = 1; i < maxObj.length; i++)
    {
        if (maxObj.A[i] > max)
            max = maxObj.A[i];
    }
    return max;
}
int Min(MenuDriven minObj)
{
    int min = minObj.A[0];
    cout << "THe min element of the given Array is : ";
    for (int i = 1; i < minObj.length; i++)
    {
        if (minObj.A[i] < min)
            min = minObj.A[i];
    }
    return min;
}
int Delete(struct MenuDriven del)
{
    int index;
    int x = 0;
    cout << "Enter the index you want to delete : ";
    cin >> index;
    x = del.A[index];
    if (index >= 0 && index <= del.length)
    {
        for (int i = index; i < del.length - 1; i++)
        {
            del.A[i] = del.A[i + 1];
        }
        del.length--;
        return x;
    }
}
int Sum(MenuDriven *sumObj)
{
    int total = 0;
    cout << "The sum of total element of given array is : ";
    for (int i = 0; i < sumObj->length; i++)
    {
        total += sumObj->A[i];
    }
    return total;
}
int IterBinarySearch(MenuDriven list, int keyElement)
{
    int low, high, mid;
    low = 0;
    high = list.length - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (keyElement == list.A[mid])
            return mid;
        else if (keyElement < list.A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
MenuDriven *Merge(MenuDriven *arr1, MenuDriven *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct MenuDriven *arr3;
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
    arr3->size = (sizeof(MenuDriven));

    return arr3;
}
// Driver Function
int main()
{

    int choice;
    struct MenuDriven arr;
    struct MenuDriven arr2;
    do
    {
        cout << "//// MENU ////" << endl;
        cout << "1 : Inserting element to an array " << endl;
        cout << "2 : Setting Element on the Index " << endl;
        cout << "3 : TO get the maximum element of array " << endl;
        cout << "4 : delete element from array : " << endl;
        cout << "5 : To get the sum of all element in array : " << endl;
        cout << "6 : Enter for binary search : " << endl;
        cout << "7 : To get minimum element of array : " << endl;
        cout << "8 : Menrging two Array : " << endl;
        cout << "9 : EXIT THE PROGRAM!! " << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the size of an array :";
            cin >> arr.size;
            arr.length = 0;

            arr.A = (int *)malloc(arr.size * sizeof(int));
            cout << "Enter the length of the Array : ";
            cin >> arr.length;

            for (int i = 0; i < arr.length; i++)
            {
                cout << "Enter element at index " << i << " : ";
                cin >> arr.A[i];
            }
            // Create(arr);
            Insert(&arr);
            Display(arr);
            break;
        case 2:
            cout << "Enter the size of an array :";
            cin >> arr.size;
            arr.length = 0;

            arr.A = (int *)malloc(arr.size * sizeof(int));
            cout << "Enter the length of the Array : ";
            cin >> arr.length;

            for (int i = 0; i < arr.length; i++)
            {
                cout << "Enter element at index " << i << " : ";
                cin >> arr.A[i];
            }
            cout << Set(arr);
            Display(arr);
            break;
        case 3:
            cout << "Enter the size of an array :";
            cin >> arr.size;
            arr.length = 0;

            arr.A = (int *)malloc(arr.size * sizeof(int));
            cout << "Enter the length of the Array : ";
            cin >> arr.length;

            for (int i = 0; i < arr.length; i++)
            {
                cout << "Enter element at index " << i << " : ";
                cin >> arr.A[i];
            }
            Display(arr);
            cout << Max(arr);
            break;
        case 4:
            cout << "Enter the size of an array :";
            cin >> arr.size;
            arr.length = 0;

            arr.A = (int *)malloc(arr.size * sizeof(int));
            cout << "Enter the length of the Array : ";
            cin >> arr.length;

            for (int i = 0; i < arr.length; i++)
            {
                cout << "Enter element at index " << i << " : ";
                cin >> arr.A[i];
            }
            cout << Delete(arr);
            Display(arr);
            break;
        case 5:
            cout << "Enter the size of an array :";
            cin >> arr.size;
            arr.length = 0;

            arr.A = (int *)malloc(arr.size * sizeof(int));
            cout << "Enter the length of the Array : ";
            cin >> arr.length;

            for (int i = 0; i < arr.length; i++)
            {
                cout << "Enter element at index " << i << " : ";
                cin >> arr.A[i];
            }
            Display(arr);
            cout << Sum(&arr);
            break;
        case 6:
            cout << "Enter the size of an array :";
            cin >> arr.size;
            arr.length = 0;
            arr.A = new int[arr.size];
            arr.length = 0;
            cout << "Enter the length of the Array : ";
            cin >> arr.length;

            for (int i = 0; i < arr.length; i++)
            {
                cout << "Enter element at index " << i << " : ";
                cin >> arr.A[i];
            }
            int key;
            cout << "Enter the key elemet you want to search : ";
            cin >> key;
            Display(arr);
            IterBinarySearch(arr, key);
            break;
        case 7:
            cout << "Enter the size of an array :";
            cin >> arr.size;
            arr.length = 0;

            arr.A = (int *)malloc(arr.size * sizeof(int));
            cout << "Enter the length of the Array : ";
            cin >> arr.length;

            for (int i = 0; i < arr.length; i++)
            {
                cout << "Enter element at index " << i << " : ";
                cin >> arr.A[i];
            }
            Display(arr);
            cout << Min(arr);
            break;
        case 8:
            cout << "Enter the size of an array :";
            cin >> arr.size;
            arr.length = 0;
            struct MenuDriven arr2;

            arr.A = (int *)malloc(arr.size * sizeof(int));
            cout << "Enter the length of the Array : ";
            cin >> arr.length;

            for (int i = 0; i < arr.length; i++)
            {
                cout << "Enter element at index " << i << " : ";
                cin >> arr.A[i];
            }
            Display(arr);
            cout << "Enter the size of 2nd array : ";
            cin >> arr2.size;
            arr2.length = 0;
            cout << "Enter the length of 2nd Array : ";
            cin >> arr2.length;
            for (int i = 0; i < arr2.length; i++)
            {
                cout << "Enter element of index : " << i << " : ";
                cin >> arr2.A[i];
            }
            Display(arr2);
            struct MenuDriven *arr3;
            arr3 = Merge(&arr, &arr2);
            Display(*arr3);
            break;
        }

    } while (choice < 9);

    free(arr.A);
    delete[] arr.A;
    return 0;
}