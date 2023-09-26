#include <iostream>
using namespace std;

class MenuDriven
{
private:
    int *A;
    int size;
    int length;

public:
    MenuDriven()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    MenuDriven(int s)
    {
        size = s;
        length = 0;
        A = new int[size];
    }
    ~MenuDriven()
    {
        delete[] A;
    }
    void Display();
    void APPEND();
    void CREATE()
    {
        cout << "Enter the length of array : ";
        cin >> length;

        for (int i = 0; i < length; i++)
        {
            cout << "Enter element at index " << i << " : ";
            cin >> A[i];
        }
    }
    void Insert();
    void BinarySearch();
    void LinearSearch();
    void MAX();
    void MIN();
    void SUM();
    void REVERSE();
    void AVERAGE();
    void InsertSort();
    void IsSort();
    void REARRANGE();
    MenuDriven *MERGE();
    MenuDriven *UNION();
    MenuDriven *INTERSECTION();
    MenuDriven *DIFFERENCE();
};

void MenuDriven ::Display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void MenuDriven ::APPEND()
{
    int e;
    cout << "Enter the element to Add at the END : ";
    cin >> e;
    if (length < size)
    {
        A[length] = e;
    }
}
void MenuDriven::Insert()
{
    int index;
    cout << "Enter index : ";
    cin >> index;

    int n;
    cout << "Enter element to put on index " << index << " : ";
    cin >> n;

    if (index >= 0 && index < length)

        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
    A[index] = n;
    length++;
}
int main()
{
    MenuDriven *obj1;
    int sz;
    cout << "Enter the size of an array : ";
    cin >> sz;

    obj1 = new MenuDriven(sz);
    obj1->CREATE();
    obj1->Display();
    obj1->APPEND();
    obj1->Display();

    return 0;
}