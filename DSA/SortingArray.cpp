#include <iostream>
using namespace std;

struct SortingArray
{

    int *A;
    int length;
    int size;
};
void Display(SortingArray arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}
int isSorted(SortingArray arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}
void inSertSort(SortingArray arr)
{
    int element;
    int index;
    cout << "Enter the element to put index "
         << " : ";
    cin >> element;
    index = arr.length - 1;
    if (arr.length == arr.size)
        return;
    while (arr.A[index] > element)
    {
        arr.A[index + 1] = arr.A[index];
        index--;
    }
    arr.A[index + 1] = element;
    arr.length;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void InterChanging(SortingArray arr)
{
    int i = 0;
    int j = arr.length - 1;
    while (i < j)
    {
        while (arr.A[i] < 0)
            i++;
        while (arr.A[j] >= 0)
            j--;
        if (i < j)
        {
            swap(&arr.A[i], &arr.A[j]);
        }
    }
}
int main()
{
    SortingArray sObj;
    cout << "Enter the size of an array : ";
    cin >> sObj.size;
    sObj.A = new int[sObj.size];
    sObj.length = 0;
    cout << "Enter the length on an array : ";
    cin >> sObj.length;

    for (int i = 0; i < sObj.length; i++)
    {
        cout << "Enter element at index " << i << " : ";
        cin >> sObj.A[i];
    }
    Display(sObj);
    InterChanging(sObj);
    Display(sObj);
    inSertSort(sObj);
    Display(sObj);
    cout << isSorted(sObj);
    cout << endl;
    Display(sObj);

    delete[] sObj.A;

    return 0;
}