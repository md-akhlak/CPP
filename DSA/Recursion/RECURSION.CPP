#include <iostream>
using namespace std;

void fun(int n)
{
    if (n >= 0)
    {
        cout << n << " ";
        fun(n - 1);
    }
}
void fun2(int x)
{
    if (x >= 0)
    {
        fun2(x - 1);
        cout << x << " ";
    }
}
int n = 0;
int function(int x)
{
    // static int n = 0;
    if (x > 0)
    {
        n++;
        return function(x - 1) + n;
    }
    return 0;
}
void stu(int r)
{

    while (r > 0)
    {
        cout << r << " ";
        r--;
    }
    stu(r - 1);
}
void FUNCT_B(int o);
void FUNCT_A(int o)
{
    if (o > 1)
    {
        cout << " " << o << " ";
        FUNCT_B(o - 1);
    }
}
void FUNCT_B(int o)
{
    if (o > 0)
    {
        cout << " " << o << " ";
        FUNCT_A(o / 2);
    }
}

int main()
{
    int o;
    cout << "Enter o : ";
    cin >> o;
    FUNCT_A(o);
    cout << endl;

    int r;
    cout << "enter r :";
    cin >> r;
    stu(r);
    int k;
    cout << "Enter k:";
    cin >> k;
    cout << function(k);
    cout << endl;
    int x;
    cout << "Enter x:";
    cin >> x;
    fun(x);
    cout << endl;
    int n;
    cout << "Enter n : ";
    cin >> n;
    fun2(n);

    return 0;
}