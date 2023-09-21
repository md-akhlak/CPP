#include <iostream>
using namespace std;

class SingleMissing
{
private:
    int *A;
    int size;
    int length;

public:
    SingleMissing()
    {
        size = 0;
        length = 0;
        A = new int[size];
    }
    SingleMissing(int s)
    {
        size = s;
        length = 0;
        A = new int[size];
    }
    ~SingleMissing()
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
    // find missing when element starts from 1
    int SINGLE()
    {
        int n;
        // n finds last index
        n = A[length - 1];
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum += A[i];
        }
        int S = n * (n + 1) / 2;
        return (S - sum);
    }
    // Find missing when elements not start form 1
    void Mising()
    {
        int diff;
        int low = A[0];
        // cout<<A[0];
        diff = low - 0;
        for (int i = 0; i < length; i++)
        {
            if (A[i] - i != diff)
            {
                cout << "Missing found " << endl;
                cout << i + diff;
                break;
            }
        }
    }
};

int main()
{
    SingleMissing arr;
    arr.Create();
    arr.Display();
    // cout << arr.SINGLE();
    arr.Mising();
}
