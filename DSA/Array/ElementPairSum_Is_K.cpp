#include <iostream>
using namespace std;

class PairOfSum
{
    int *A;
    int size;
    int length;

public:
    PairOfSum()
    {
        size = 10;
        length = 6;
        A = new int(size);
    }
    PairOfSum(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~PairOfSum()
    {
        delete[] A;
    }
    void Create()
    {
        cout << "Enter size : ";
        cin >> size;
        cout << "Enter length : ";
        cin >> length;
        for (int i = 0; i < length; i++)
        {
            cout << "Enter the element at index " << i << " : ";
            cin >> A[i];
        }
    }
    void Display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    //  using normal method : gives time complexity O(n^2)
    void Sum_K()
    {
        int k;
        cout << "Enter K : ";
        cin >> k;

        for (int i = 0; i < length - 1; i++)
        {
            for (int j = i + 1; j < length; j++)
            {
                if (A[i] + A[j] == k)
                {
                    cout << A[i] << " + " << A[j] << " = " << k << endl;
                }
            }
        }
    }
    // using hasing : gives time complexity O(n)
    void Method_2()
    {
        int *H;
        H = new int[size];
    }
};

int main()
{
    // PairOfSum arr = {6,10,{4,2,3,5,8,1}};
    PairOfSum obj;
    obj.Create();
    obj.Display();
    obj.Sum_K();

    return 0;
}