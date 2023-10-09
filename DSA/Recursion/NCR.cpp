#include <iostream>
using namespace std;

//  using the factoial
int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1);
    }
}
int ncr(int n, int r)
{
    int numerarator, denomenator;
    numerarator = fac(n);
    denomenator = fac(r) * fac(n - r);

    return numerarator / denomenator;
}

// NCR(combinational formula) using recursion

int C(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    else
        return C(n - 1, r - 1) + C(n - 1, r);
}
//  Driver funtion
int main()
{
    int num, den;
    cout << "enter num and den : ";
    cin >> num >> den;

    cout << "The ncr value is : " << ncr(num, den) << endl;

    int n, r;
    cout << "Enter n and r : ";
    cin >> n >> r;
    cout << "The ncr is : " << C(n, r) << endl;
}