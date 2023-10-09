#include <iostream>
using namespace std;

int powerr(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return powerr(x, y - 1) * x;
    }
}
int main()
{
    int x, y;
    cout << "enter x and y : ";
    cin >> x >> y;
    cout << powerr(x, y);

    return 0;
}