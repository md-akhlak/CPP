#include <iostream>
using namespace std;

class classArray
{
private:
public:
    int *A;
    int size;
    int length = 0;
    classArray() {}
    classArray(int s)
    {
        this->size = s;
    }
    void Display(classArray Arr)
    {
        cout << "Displaying class Array is : " << endl;
        for (int i = 0; i < Arr.length; i++)
        {
            cout << Arr.A[i] << " ";
        }
        cout << endl;
    }
    int LinearSearch(classArray arr, int key)
    {
        for (int i = 0; i < arr.length; i++)
        {
            if (key == arr.A[i])
                return i;
        }
        return -1;
    }
    void swap(int *x, int *y)
    {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }
    int TranspostionLinearSearch(classArray *arr, int key)
    {
        for (int i = 0; i < arr->length; i++)
        {
            if (key == arr->A[i])
            {
                swap(&arr->A[i], &arr->A[i - 1]);
                return i - 1;
            }
            return -1;
        }
    }
    // int MoveToHeadLinearSearch(classArray *arr, int key)
    // {
    //     for (int i = 0; i < arr->length; i++)
    //     {
    //         if (key == arr->A[i])
    //         {
    //             swap(&arr->A[i], &arr->A[0]);
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
    ~classArray()
    {
        delete[] A;
    }
};
int main()
{

    class classArray Arr;
    int keyElelment;
    cout << "enter size of an Array : ";
    cin >> Arr.size;

    Arr.A = new int[Arr.size];
    Arr.length = 0;

    cout << "Enter the element to be store in an array : ";
    cin >> Arr.length;

    for (int i = 0; i < Arr.length; i++)
    {
        cout << "Enter element at index " << i << " : ";
        cin >> Arr.A[i];
    }
    cout << "Enter the Key Element you want to  find : ";
    cin >> keyElelment;

    cout << endl;
    // cout << Arr.LinearSearch(Arr , keyElelment);
    // cout<<endl;
    // Arr.Display(Arr);
    cout << Arr.TranspostionLinearSearch(&Arr, keyElelment);
    cout << endl;
    Arr.Display(Arr);
    // cout << Arr.MoveToHeadLinearSearch(&Arr, keyElelment);
    // cout << endl;
    // Arr.Display(Arr);

    delete[] Arr.A;

    return 0;
}