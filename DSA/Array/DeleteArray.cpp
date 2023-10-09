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
    int Delete(classArray *del)
    {
        int index;
        int x = 0;
        cout << "Enter the index you want to delete : ";
        cin >> index;
        x = del->A[index];
        if (index >= 0 && index <= del->length)
        {
            for (int i = index; i < length - 1; i++)
            {
                del->A[i] = del->A[i + 1];
            }
            del->length--;
            return x;
        }
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
    Arr.Delete(&Arr);
    Arr.Display();

    delete[] Arr.A;

    return 0;
}