#include <iostream>
using namespace std;

class MultipleMissing
{
private:
    int *A;
    int size;
    int length;

public:
    MultipleMissing()
    {
        size = 0;
        length = 0;
        A = new int[size];
    }
    MultipleMissing(int s)
    {
        size = s;
        length = 0;
        A = new int[size];
    }
    ~MultipleMissing()
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
            cout << "Enter element at index " << i << " : ";
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
    int Menthod_1()
    {
        // int high = A[length - 1];
        int diff = A[0] - 0;
        for (int i = 0; i < length; i++)
        {
            if (A[i] - i < diff)
            {
                while (diff < A[i] - i)
                {
                    cout << "Multiple missing found" << endl;
                    diff++;
                    cout << i + diff;
                }
            }
        }
        return diff;
    }

    void Method_2()
    {
        int low = A[0];
        int *H;
        int high = A[length - 1];

        H = new int[high];

        for (int i = 0; i < size; i++)
        {
            H[i] = 0;
        }

        for (int i = 0; i < length; i++)
        {
            H[A[i]]++;
        }

        for (int i = low; i <= *H; i++)
        {
            if (H[i] == 0)
            {
                cout << i << ",";
            }
        }
    }
};

int main()
{
    MultipleMissing arr;
    arr.Create();
    arr.Display();
    arr.Menthod_1();
    arr.Display();

    return 0;
}