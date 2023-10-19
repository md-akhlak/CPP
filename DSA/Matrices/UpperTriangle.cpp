#include <iostream>
using namespace std;

class UpperTraingular
{
private:
    int *A;
    int n;

public:
    UpperTraingular()
    {
        n = 2;
        A = new int[2];
    }
    UpperTraingular(int n)
    {
        this->n = n;
        A = new int[n];
    }
    ~UpperTraingular()
    {
        delete[] A;
    }
    void SetUpperTraingular(int i, int j, int x)
    {
        if (i <= j)
        {
            A[n * (i - 1) - (i - 2) * (i - 1) / 2 + j - i] = x;
        }
    }
    int GetUpperTraingular(int i, int j)
    {
        if (i <= j)
        {
            return A[n * (i - 1) - (i - 2) * (i - 1) / 2 + j - i];
        }
        else
        {
            return 0;
        }
    }
    void DisplayUpperTraingular()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i <= j)
                {
                    cout << A[n * (i - 1) - (i - 2) * (i - 1) / 2 + j - i] << " ";
                }
                else
                {
                    cout << "0";
                }
            }
            cout << endl;
        }
    }
};

class LowerTriangularMatrix
{
private:
    int *B;
    int n;

public:
    LowerTriangularMatrix()
    {
        n = 3;
        B = new int[3 * (3 + 1) / 2];
    }

    LowerTriangularMatrix(int n)
    {
        this->n = n;
        B = new int[n * (n + 1) / 2];
    }

    ~LowerTriangularMatrix()
    {
        delete[] B;
    }

    int GetDimension()
    {
        return n;
    }

    void Set(int i, int j, int y);
    int Get(int i, int j);
    void Display();
};

void LowerTriangularMatrix::Set(int i, int j, int y)
{
    if (i <= j)
        B[j * (j - 1) / 2 + (i - 1)] = y;
}

int LowerTriangularMatrix::Get(int i, int j)
{
    if (i <= j)
        return B[j * (j - 1) / 2 + (i - 1)];
    return 0;
}

void LowerTriangularMatrix::Display()
{
    cout << "\nMatrix is: " << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
                cout << B[j * (j - 1) / 2 + (i - 1)] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{

    // cout << "Display by row major formula" << endl;
    // int dim;
    // cout << "Enter dimensions : ";
    // cin >> dim;

    // UpperTraingular mat(dim);

    // int elements;
    // cout << "Enter all elements : " << endl;
    // for (int i = 1; i <= dim; i++)
    // {
    //     for (int j = 1; j <= dim; j++)
    //     {
    //         cin >> elements;
    //         mat.SetUpperTraingular(i, j, elements);
    //     }
    // }

    // cout << endl;
    // mat.DisplayUpperTraingular();

    cout << "Dsplaying Upper Matrix by columns : " << endl;
    int colDim;
    cout << "Enter Column Dimentions : " << endl;
    cin >> colDim;

    LowerTriangularMatrix ColMat(colDim);
    int ColELements;
    cout << "Enter Elements : " << endl;
    for (int i = 1; i <= colDim; i++)
    {
        for (int j = 1; j <= colDim; j++)
        {
            cin >> ColELements;
            ColMat.Set(i, j, ColELements);
        }
    }

    ColMat.Display();

    return 0;
}