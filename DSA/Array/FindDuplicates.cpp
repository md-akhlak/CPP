#include <iostream>
using namespace std;

class Duplicates
{
private:
    int *A;
    int size;
    int length;

public:
    Duplicates()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    Duplicates(int s)
    {
        size = s;
        length = 0;
        A = new int[size];
    }
    ~Duplicates()
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
    void findingDuplicates()
    {
        int lastDup = 0;
        for (int i = 0; i < length; i++)
        {
            if (A[i] == A[i + 1] && A[i] != lastDup)
            {
                cout << "Duplites found" << endl;
                cout << A[i];
                cout << endl;
                lastDup = A[i];
            }
        }
        cout << endl;
    }
    void findDuplicatesUseHashing()
    {
        int *H;
        int max = A[length - 1];
        H = new int[size];
        for (int i = 0; i < max; i++)
        {
            H[i] = 0;
        }
        for (int i = 0; i < length; i++)
        {
            H[A[i]]++;
        }
        for (int i = 0; i < max; i++)
        {
            if (H[i] > 1)
            {
                cout << i << " -> " << H[i] << endl;
            }
        }
    }
    void unSortedDuplicates()
    {
        cout << "Duplicates found" << endl;
        for (int i = 0; i < length; i++)
        {
            int count = 1;
            if (A[i] != -1)
            {
                for (int j = i + 1; j < length; j++)
                {
                    if (A[i] == A[j])
                    {
                        count++;
                        A[j] = -1;
                    }
                }
                if (count > 1)
                {
                    cout << A[i] << "->" << count << endl;
                }
            }
        }
    }
    void countingDuplicates()
    {
        int i, j;
        for (i = 0; i < length - 1; i++)
        {
            j = i + 1;
            while (A[j] == A[i])
            {
                j++;
            }
            cout << A[i] << "-> " << j - i << " Duplicates" << endl;
            i = j - 1;
        }
        cout << endl;
    }
};

int main()
{
    Duplicates obj;
    obj.Create();
    obj.Display();
    // obj.unSortedDuplicates();
    obj.findDuplicatesUseHashing();
    // obj.findingDuplicates();
    obj.countingDuplicates();

    return 0;
}