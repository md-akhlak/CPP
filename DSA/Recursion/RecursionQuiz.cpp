#include <iostream>
using namespace std;

int f(int &x, int c)
{
    c -= 1;

    if (c == 0)
        return 1;

    x = x + 1;

    return f(x, c) * x;
}

int Func(int n)
{
    static int i = 1;
    if (n >= 5)
        return n;
    n += i;
    i++;
    Func(n);
}

void foo(int n, int sum)
{
    int k = 0;
    int j = 0;
    if (n == 0)
        return;
    k = n % 10;
    j = n / 10;
    sum += k;
    foo(j, sum);
    cout << k << endl;
}
int fun(int n)

{

    int x = 1, k;

    if (n == 1)
        return x;

    for (k = 1; k < n; ++k)

        x = x + fun(k) * fun(n - k);

    return x;
}
void count(int n)

{

    static int d = 1;

    printf("%d", n);

    printf("%d", d);

    d++;

    if (n > 1)
        count(n - 1);

    printf("%d", d);
}

int main()
{
    count(3);
    cout<<endl;
    cout << fun(5) << endl;

    // cout<<f(&5);

    int sum = 0;
    int a = 2048;

    foo(a, sum);

    // cout << Func(1);
}