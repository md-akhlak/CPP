#include<iostream>
using namespace std;
//  using recursion
double rec(int x, int n){
    static double p = 1, f = 1;
    double r;

    if(n == 0){
        return 1;
    }
    r = rec(x , n-1);
    p = p*x;
    f = f*n;
    return (r + p/f);


}
//  using iterative
double e(int x, int n){
    double s = 1;
    double num =1;
    double den = 1;
    for(int i = 1; i<=n;i++){
        num *= x;
        den *= i;
        s += num/den;
    }
    return s;
}

int main(){
    int x = 2;
    
    int n = 10;
    cout<<"\n"<<e(x, n);

    return 0;
}