#include <iostream>
using namespace std;
// using recursion
int FACTORIAL(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return FACTORIAL(n - 1) * n;
    }
}
// using iteration
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int x;
    cout << "enter x:";
    cin >> x;
    cout << fact(x);
    cout << endl;

    int n;
    cout << "enter n : ";
    cin >> n;
    cout << FACTORIAL(n);

    return 0;
}
