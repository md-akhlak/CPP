#include<iostream>
using namespace std;

int main(){

    cout<<"Method 1"<<endl;
    char A[] = "PYTHON";
    char B[sizeof(A)];
    int k,l;
    for(  k = 0; A[k] != '\0'; k++){}
    k--;
    for( l=0; k >=0; k--, l++){
        B[l] = A[k];
    }
    B[l] = '\0';
    cout<<"Reverse of A is : "<<B<<endl;
    // reversing string 2
    char n[] = "Ramish Ahmad";
    cout<<"method 2"<<endl;
    char temp;
    int i, j;
    for (j = 0; n[j] != '\0'; j++)
    {
    }
    j = j - 1;
    for (i = 0; i < j; i++, j--)
    {
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }
    cout << n << endl;
    return 0;
}