#include <iostream>
using namespace std;

//  Representation of Array using stucture
struct Array
{
    int *A;
    int size;
    int length;

    // void stuctCreate()
    // {
    //     cout << "Array using Stucture : " << endl;
    //     cout << "Enter the size of an Array : " << flush;
    //     cin >> size;
    //     cout << "Enter the elements to store in an Array : " << flush;
    //     cin >> length;
    //     cout << "Enter the elements of an Array : " << endl;
    //     for (int i = 0; i < length; i++)
    //     {
    //         cout << "Enter element : " << i << " = ";
    //         cin >> A[i];
    //     }
    // }
    void stuctDisplay()
    {
        cout << "Displaying Stucture Array is : " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " " << flush;
        }
        cout << endl;
    }
    void AppendSruct(Array *ar)
    {
        int x;
        cout << "Enter the element to store at the end of structure array : ";
        cin >> x;
        if (ar->length < ar->size)
        {
            ar->A[ar->length++] = x;
        }
    }
    void AppendDisplay()
    {
        cout << "Displaying Stucture Array after append : " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " " << flush;
        }
        cout << endl;
    }
    void InsertStruct(Array *ins)
    {
        int index, element;
        cout << "Enter to index : ";
        cin >> index;
        cout << "Enter the element : ";
        cin >> element;
        if (index >= 0 && index <= ins->length)
            ;
        for (int i = 0; i > index; i--)
        {
            ins->A[i] = ins->A[i - 1];
        }
        ins->A[index] = element;
        ins->length++;
    }
    void InsertDisplay()
    {
        cout << "Displaying Stucture Array after inserting new element at the given index : " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " " << flush;
        }
        cout << endl;
    }
    int DeleteStruct(Array *StructDel)
    {
        int index;
        int n = 0;
        cout << "Enter the Index you want to delete : ";
        cin >> index;
        if (index >= 0 && index <= StructDel->length)
        {
            n = StructDel->A[index];
            for (int i = index; i < StructDel->length - 1; i++)
            {
                StructDel->A[i] = StructDel->A[i + 1];
            }
            StructDel->length--;
            return n;
        }
    }
    void DeleteStructDisplay()
    {
        cout << "Displaying Stucture Array after Deleting the index : " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " " << flush;
        }
        cout << endl;
    }
};

// Representation of Array using CLASS
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
    void Append(classArray *Arr)
    {
        int x;
        cout << "Enter element : ";
        cin >> x;
        if (Arr->length < Arr->size)
        {
            Arr->A[Arr->length++] = x;
        }
    }
    void DisplayAppend()
    {
        cout << "Displaying class Array after adding element at the end : " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    void Insert(classArray *ar)
    {
        int index;
        int n;
        cout << "Enter index : ";
        cin >> index;
        cout << "Enter n : ";
        cin >> n;
        if (index >= 0 && index <= ar->length)
            ;
        for (int i = ar->length; i > index; i--)
        {
            ar->A[i] = A[i - 1];
        }
        ar->A[index] = n;
        ar->length++;
    }
    void DisplayInset()
    {
        cout << "Displaying class Array Ater inseting new element : " << endl;
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
    void DisplayDelete()
    {
        cout << "Displaying class Array Ater inseting new element : " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    int LinearSearch(classArray *arr){
        int key;
        cout<<"Enter key : ";
        cin>>key;
        for(int i = 0; i < arr->length; i++){
            if(key == arr->A[i])
            return i;
        }
        return -1;
    }
    
    ~classArray()
    {
        delete[] A;
    }
};
//  MAIN/DRIVER FUNTION
int main()
{
    // Displaying stuct Array
    struct Array arr;

    // cout << "Enter the size of stucture array : ";
    // cin >> arr.size;
    // arr.A = new int[arr.size];
    // arr.length = 0;

    // cout << "Enter the length of element to stored in stucture array : ";
    // cin >> arr.length;

    // for (int i = 0; i < arr.length; i++)
    // {
    //     cout << "Enter element at index " << i << " : ";
    //     cin >> arr.A[i];
    // }
    // // arr.stuctCreate();
    // arr.stuctDisplay();
    // arr.AppendSruct(&arr);
    // arr.AppendDisplay();
    // arr.InsertStruct(&arr);
    // arr.InsertDisplay();
    // arr.DeleteStruct(&arr);
    // arr.stuctDisplay();

    // delete[] arr.A;

    // cout << endl;

    // Displaying class Array

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
    cout<<Arr.LinearSearch(&Arr);
    // Arr.Append(&Arr);
    // Arr.DisplayAppend();
    // Arr.Insert(&Arr);
    // Arr.DisplayInset();
    // Arr.Delete(&Arr);
    // Arr.DisplayDelete();

    delete []Arr.A;

    /* The `cout << flush;` statement is used to flush the output stream. Flushing the output stream
    means that any buffered output is immediately written to the output device. In this case, it
    ensures that any remaining output is displayed before the program exits. */

    cout << flush;

    /* The `getchar()` function is used to read a single character from the standard input (keyboard)
    and discard it. In this code, it is used to wait for the user to press a key before the program
    exits. This is done to prevent the console window from closing immediately after the program
    finishes execution, allowing the user to see the output. */
    getchar();
}