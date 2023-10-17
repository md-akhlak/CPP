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



int main()
{
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

    return 0;
}