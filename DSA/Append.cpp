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
    void Display()
    {
        cout << "Displaying class Array is : " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    void Append(classArray *Arr)
    {
        int x;
        cout << "Enter element to Add at the end : ";
        cin >> x;
        if (Arr->length < Arr->size)
        {
            Arr->A[Arr->length++] = x;
        }
    }

    void DisplayAppend()
    {
        cout << "Displaying class Array after adding element at the end : " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    ~classArray()
    {
        delete[] A;
    }
};

int main()
{
    class classArray Arr;
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

    Arr.Display();
    Arr.Append(&Arr);
    Arr.DisplayAppend();

    delete[] Arr.A;

    return 0;
}