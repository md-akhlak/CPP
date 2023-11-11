#include <iostream>
using namespace std;

class classArray
{
private:
public:
    int *A;
    int size;
    int length = 0;
    int B[10];

    classArray() {}
    classArray(int s)
    {
        this->size = s;
    }
    void Display(classArray Arr)
    {
        cout << "Displaying class Array is : " << endl;
        for (int i = 0; i < Arr.length; i++)
        {
            cout << Arr.A[i] << " ";
        }
        cout << endl;
    }
    int IterBinarySearch(classArray list, int keyElement)
    {
        int low, high, mid;
        low = 0;
        high = list.length - 1;
        while (low <= high)
        {
            mid = (low + high) / 2;

            if (keyElement == list.A[mid])
                return mid;
            else if (keyElement < list.A[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
    }
    int RecBinarySearch(int a[], int low, int high)
    {
        int keyEelement;
        int mid;
        if (low <= high)
        {
            mid = low + (high - low) / 2;
            if (keyEelement == a[mid])
                return mid;
            else if (keyEelement < a[mid])
                return RecBinarySearch(a, low, mid - 1);
            else
                return RecBinarySearch(a, mid + 1, high);
        }
        return -1;
    }

    ~classArray()
    {
        delete[] A;
    }
};

// Structure
struct List
{
    int size;
    int length;
    int B[10];
};

void Display(struct List list)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < list.length; i++)
        printf("%d ", list.B[i]);
}

int RBinSearch(int a[], int l, int h, int key)
{

    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RBinSearch(a, l, mid - 1, key);
        else
            return RBinSearch(a, mid + 1, h, key);
    }
    return -1;
}

int main()
{

    cout << "Displaying Iterative Binary Funtion" << endl;
    class classArray Arr;
    int keyElelment;
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
    Arr.Display(Arr);
    cout << "Enter the Key Element you want to  find : ";
    cin >> keyElelment;

    cout << Arr.IterBinarySearch(Arr, keyElelment);
    cout << "\n";

    delete[] Arr.A;

    // class classArray obj = {10,8,{2,3,4,6,10,12,23,34,35}};

    // cout << "Displaying Recursive Function for Binary search " << endl;

    // struct List list_1 = {10, 8, {2, 3, 9, 16, 18, 21, 28, 32, 35}};

    // int x;

    // printf("Enter the element which you want to search: \n");
    // scanf("%d", &x);
    // printf("Element present at index of %d\n", RBinSearch(list_1.B, 0, list_1.length, x));

    return 0;
}