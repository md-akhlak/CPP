#include <iostream>
using namespace std;
// using Struct
struct Diagonal
{
    int A[10];
    int n;
};
void Set(struct Diagonal *m, int i, int j, int k)
{
    if (i == j)
    {
        m->A[i - 1] = k;
    }
}
int Get(struct Diagonal m, int i, int j)
{
    if (i == j)
    {
        return m.A[i - 1];
    }
    else
    {
        return 0;
    }
}
void Display(struct Diagonal m)
{
    int i, j;
    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            if (i == j)
            {
                cout << m.A[i] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
// Using Classes and object
class DiagonalMatrix
{
    int *A;
    int n;

public:
    DiagonalMatrix()
    {
        n = 2;
        A = new int[2];
    }
    DiagonalMatrix(int n)
    {
        this->n = n;
        A = new int[n];
    }
    ~DiagonalMatrix()
    {
        delete[] A;
    }
    int getDimention()
    {
        return n;
    }
    void Set(int i, int j, int k)
    {
        if (i == j)
        {
            A[i - 1] = k;
        }
    }
    int Get(int i, int j)
    {
        if (i == j)
        {
            return A[i - 1];
        }
        else
        {
            return 0;
        }
    }
    void Display()
    {
        int i, j;
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                if (i == j)
                {
                    cout << A[i] << " ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    Diagonal obj;
    obj.n = 5;
    cout << "Using Struct" << endl;
    Set(&obj, 1, 1, 4);
    Set(&obj, 2, 2, 8);
    Set(&obj, 3, 3, 2);
    Set(&obj, 4, 4, 5);
    Set(&obj, 5, 5, 3);

    Display(obj);
    cout << "Element : " << Get(obj, 2, 2);

// ****************************

    cout << endl;
    cout << "Using Classes" << endl;
    DiagonalMatrix ob(4);
    ob.Set(1, 1, 5);
    ob.Set(2, 2, 1);
    ob.Set(3, 3, 8);
    ob.Set(4, 4, 2);
    ob.Set(5, 5, 3);
    ob.Display();
    cout << "Element : " << ob.Get(1, 1);

    return 0;
}