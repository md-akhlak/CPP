#include <iostream>
using namespace std;

class Array
{
public:
    int size;
    int length;
    int *Ar;
    Array() {}
    Array(int s)
    {
        this->size = s;
    }
    void Display(Array A)
    {
        cout << "This array is " << endl;
        for (int i = 0; i < A.length; i++)
        {
            cout << A.Ar[i] << " ";
        }
        cout << endl;
    }
    int Get(Array Getobj)
    {
        cout << "Displaying Get Function" << endl;
        int index;
        cout << "Enter index to get element of that index : ";
        cin >> index;
        if (index >= 0 && index < Getobj.length)
        {
            cout << "The element at index " << index << " is : ";
            return Getobj.Ar[index];
            cout << endl;
        }

        return -1;
    }
    int Set(Array setObj)
    {
        int index;
        int element;
        cout << "Enter the index you want change : ";
        cin >> index;
        cout << "Enter the new element for " << index << " : ";
        cin >> element;
        if (index >= 0 && index < setObj.length)
        {
            cout << "Now the element at index " << index << " is : ";
            return setObj.Ar[index] = element;
            cout << endl;
        }
        cout << endl;
        cout << "invalid index ";
    }
    int Max(Array maxObj)
    {
        int max = maxObj.Ar[0];
        cout << "THe max element of the given Array is : ";
        for (int i = 1; i < maxObj.length; i++)
        {
            if (maxObj.Ar[i] > max)
                max = maxObj.Ar[i];
        }
        return max;
    }
    int Min(Array minObj)
    {
        int min = minObj.Ar[0];
        cout << "THe min element of the given Array is : ";
        for (int i = 1; i < minObj.length; i++)
        {
            if (minObj.Ar[i] < min)
                min = minObj.Ar[i];
        }
        return min;
    }

    int Sum(Array sumObj)
    {
        int total = 0;
        cout << "The sum of total element of given array is : ";
        for (int i = 0; i < sumObj.length; i++)
        {
            total += sumObj.Ar[i];
        }
        return total;
    }
    int Average(Array avObj)
    {
        int total = 0;
        cout << "The Average of the given array is : ";
        for (int i = 0; i < avObj.length; i++)
        {
            total += avObj.Ar[i];
        }
        return total / avObj.length;
    }
};

int main()
{

    Array GetArr;
    cout << "Enter the size of array : ";
    cin >> GetArr.size;

    GetArr.Ar = new int[GetArr.size];
    GetArr.length = 0;

    cout << "Enter the length of an array : ";
    cin >> GetArr.length;

    for (int i = 0; i < GetArr.length; i++)
    {
        cout << "Enter element at index " << i << " : ";
        cin >> GetArr.Ar[i];
    }
    cout << endl;
    GetArr.Display(GetArr);
    cout << endl;
    cout << GetArr.Get(GetArr);
    cout << endl;
    cout << GetArr.Set(GetArr);
    cout << endl;
    GetArr.Display(GetArr);
    cout << endl;
    cout << GetArr.Max(GetArr);
    cout << endl;
    cout << GetArr.Min(GetArr);
    cout << endl;
    GetArr.Display(GetArr);
    cout << GetArr.Sum(GetArr);
    cout << endl;
    cout << GetArr.Average(GetArr);

    free(GetArr.Ar);

    return 0;
}