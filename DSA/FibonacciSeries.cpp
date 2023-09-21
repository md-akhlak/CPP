#include<iostream>
using namespace std;
// using iteration

int ITER(int n){
    int a0 =0 , b1 = 1, c = 0;
    if(n <= 1){
        return n;
    }
    for(int i = 2; i <= n; i++){
        c = a0+b1;
        a0 = b1;
        b1 = c;
    }
    return c;
}
//  using recursion
int rfib(int n){
    if(n <= 1) return n;
    return rfib(n-2) + rfib(n-1);

}

// using memonization

int f[10];

int fib(int n){
    if(n<=1){
        f[n] = n;
        return n;
    }
    else{
    if(f[n-2] == -1){
        f[n-2] = fib(n-2);
    }
    if(f[n-1] == -1)
       f[n-1] = fib(n-1);
    return f[n-2] + f[n-1];
    }
}
int main(){

    int rn = 9;
    cout<<rfib(rn);
    cout<<endl;

    int n = 9;
    cout<<ITER(n);
    cout<<endl;
    
    for(int i = 0; i <= 10; i++)
        f[i] = -1;
    cout<<"\n"<<fib(9);

    

}
