#include <iostream>
using namespace std;

struct StructOperation
{
    int size;
    int length;
    int *A;

    // setting index
    void CreateElement(StructOperation create)
    {
        for (int i = 0; i < create.length; i++)
        {
            cout << "Enter the element at index " << i << " : ";
            cin >> create.A[i];
        }
        cout << endl;
    }
    // display
    void DisplayArr(StructOperation obj)
    {
        cout << "The array is " << endl;
        for (int i = 0; i < obj.length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    // swapping
    void Swap(int *a, int *b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
    // method 1
    void Reverse(StructOperation *rev)
    {
        for (int i = 0, j = length - 1; j < 0; i++, j--)
        {
            Swap(&A[i], &A[j]);
        }
    }
    // method 1
    void ReversingArray(StructOperation *revobj)
    {
        int *B;
        B = new int[5];
        // B = (int*)malloc(5*sizeof(int));
        int i, j;
        for (i = revobj->length - 1, j = 0; i >= 0; i--, j++)
        {
            B[j] = revobj->A[i];
        }
        for (int i = 0; i < revobj->length; i++)
        {
            revobj->A[i] = B[i];
        }
    }
};

int main()
{
    StructOperation obj_1;

    int size;
    int length;
    cout << "Enter the size of an array : ";
    cin >> obj_1.size;

    obj_1.length = 0;
    obj_1.A = new int[size];
    cout << "Enter the length of an array : ";
    cin >> obj_1.length;

    obj_1.CreateElement(obj_1);

    obj_1.DisplayArr(obj_1);
    // method 1
    obj_1.ReversingArray(&obj_1);
    obj_1.DisplayArr(obj_1);

    cout << endl;
    //  method 2
    obj_1.Reverse(&obj_1);
    obj_1.DisplayArr(obj_1);

    free(obj_1.A);
    return 0;
}
