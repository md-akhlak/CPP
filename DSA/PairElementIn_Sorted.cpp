#include <iostream>
using namespace std;
class PairElementIn_Sorted
{
private:
    int *A;
    int size;
    int length;

public:
    PairElementIn_Sorted()
    {
        size = 10;
        length = 6;
        A = new int(size);
    }
    PairElementIn_Sorted(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~PairElementIn_Sorted()
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
    void SotredSum()
    {
        int k;
        cout << "Enter k : ";
        cin >> k;
        int i = 0;
        int j = length - 1;
        while (i < j)
        {
            if (A[i] + A[j] == k)
            {
                cout << A[i] << " + " << A[j] << " = " << k << endl;
                i++;
                j--;
            }
            else if (A[i] + A[j] < k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }
    void Max_Min()
    {
        int max = A[0];
        int min = A[0];
        for (int i = 1; i < length - 1; i++)
        {
            if (A[i] < min)
            {
                min;
            }
            else if (A[i] > max)
            {
                max;
            }
        }
    }
};

int main()
{
    PairElementIn_Sorted obj;
    obj.Create();
    obj.Display();
    obj.Max_Min();
    // obj.SotredSum();

    return 0;
}