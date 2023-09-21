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
    void Insert(classArray *ar)
    {
        int index;
        int n;
        cout << "Enter index : ";
        cin >> index;
        cout << "Enter n : ";
        cin >> n;
        if (index >= 0 && index <= ar->length)
            ;
        for (int i = ar->length; i > index; i--)
        {
            ar->A[i] = A[i - 1];
        }
        ar->A[index] = n;
        ar->length++;
    }
    void DisplayInset()
    {
        cout << "Displaying class Array Ater inseting new element : " << endl;
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
    Arr.Insert(&Arr);
    Arr.DisplayInset();

    delete[] Arr.A;

    return 0;
}