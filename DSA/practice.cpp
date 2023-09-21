// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter n :";

//     while(cin>>n ){
//         if(n==0){
//                 /* The line `exit(n);` is used to terminate the program and return the value `n` as the
//                 exit status. In this case, if the input number `n` is 0, the program will exit with
//                 a status of 0. */
//                 exit(n);
//             }
//         if(n%2==0){
//             cout<<"even number "<<n<<endl;

//         }else{
//             cout<<"odd number "<<n<<endl;
//         }

//     }

//     return 0;
// }

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
int fib(int y)
{
    if (y == 0)
    {
        return 0;
    }
    if (y == 1 || y == 2)
    {
        return 1;
    }
    else
    {
        return (fib(y - 1) + fib(y - 2));
    }
}

int n = 0;
int function(int x ){
    if(x>0){
        n++;
        return function(x-1) + n;
    }
    return 0;
}

int main()
{
    int k;
    cout<<"Enter k:";
    cin>>k;
    cout<<function(k);
    cout<<endl;
    
    int x;
    cout << "Enter x:";
    cin >> x;
    fun(x);
    cout << endl;
    int n;
    cout << "Enter n : ";
    cin >> n;
    fun2(n);
    cout << endl;
    int y;
    cout << "enter y : ";
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        cout << fib(i) << " ";
    }
    // cout<<fib(y)<<" ";

    return 0;
}