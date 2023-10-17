#include <iostream>
using namespace std;

class LowerTriangle
{
private:
    int *A;
    int n;

public:
    LowerTriangle()
    {
        n = 2;
        A = new int[2 * (2 + 1) / 2];
    }
    LowerTriangle(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~LowerTriangle()
    {
        delete[] A;
    }

    void Set(int i, int j, int k)
    {
        if (i >= j)
        {
            A[i * (i - 1) / 2 + j - 1] = k;
        }
    }
    int Get(int i, int j)
    {
        if (i >= j)
        {
            return A[i * (i - 1) / 2 + j - 1];
        }
    }
    void Display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i >= j)
                {
                    cout << A[i * (i - 1) / 2 + j - 1] << " ";
                }
                else
                {
                    cout << "0";
                }
            }
            cout << endl;
        }
    }
    int GetDimetion()
    {
        return n;
    }
};

// Coulmon major formula

class ColumnMajorFormula
{
private:
    int *B;
    int x;

public:
    ColumnMajorFormula()
    {
        x = 2;
        B = new int[2 * (2 + 1) / 2];
    }
    ColumnMajorFormula(int x)
    {
        this->x = x;
        B = new int[x * (x + 1) / 2];
    }
    ~ColumnMajorFormula()
    {
        delete[] B;
    }

    void columnSet(int i, int j, int k)
    {
        if (i >= j)
        {
            B[x * (j - 1) - (j - 2) * (j - 1) / 2 + i - j] = k;
        }
    }
    int columnGet(int i, int j)
    {
        if (i >= j)
        {
            return B[x * (j - 1) - (j - 2) * (j - 1) / 2 + i - j];
        }
    }
    void columnMajorDisplay()
    {
        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= x; j++)
            {
                if (i >= j)
                {
                    cout << B[x * (j - 1) - (j - 2) * (j - 1) / 2 + i - j] << " ";
                }
                else
                {
                    cout << "0";
                }
            }
            cout << endl;
        }
    }
    int columnGetDimetion()
    {
        return x;
    }
};

int main()
{
    cout << "Display by row major formula" << endl;
    int dim;
    cout << "Enter dimensions : ";
    cin >> dim;

    LowerTriangle mat(dim);

    int elements;
    cout << "Enter all elements : " << endl;
    for (int i = 1; i <= dim; i++)
    {
        for (int j = 1; j <= dim; j++)
        {
            cin >> elements;
            mat.Set(i, j, elements);
        }
    }

    mat.Display();

    cout << endl;

    cout << "Displaying by Column major formula" << endl;

    int colDim;
    cout << "Enter column dimension : ";
    cin >> colDim;

    ColumnMajorFormula colMat(colDim);

    int colElement;
    cout << "Enter column element : ";
    for (int i = 1; i <= colDim; i++)
    {
        for (int j = 1; j <= colDim; j++)
        {
            cin >> colElement;
            colMat.columnSet(i, j, colElement);
        }
    }

    colMat.columnMajorDisplay();

    return 0;
}