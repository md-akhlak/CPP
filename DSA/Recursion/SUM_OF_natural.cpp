
#include <iostream>
using namespace std;

// using formula
int sum(int n)
{
    return n * (n + 1) / 2;
}
// using loop
int SUM(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    return sum;
}
// using recursion
int SUMM(int z)
{
    if (z == 0)
    {
        return 0;
    }
    else
    {
        return SUMM(z - 1) + z;
    }
}

int main()
{
    // using formula
    int n;
    cout << "enter n : ";
    cin >> n;
    cout << sum(n);
    cout << endl;
    // using loop
    int x;
    cout << "enter x : ";
    cin >> x;
    cout << SUM(x);
    cout << endl;
    // using recursion
    int z;
    cout << "enter z :";
    cin >> z;
    cout << SUMM(z);

    return 0;
}