#include<iostream>
using namespace std;

int  main(){

        // // program to change Lower case to Upper case

    char A[] = "mohammad akhlak";
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 97 && A[i] <= 122)
        {
            A[i] -= 32;
        }
        cout << A[i];
    }
    cout << endl;
    // // program to change upper case to lower case
    char B[] = "MOHAMMAD AKHLAK";
    for (int i = 0; B[i] != '\0'; i++)
    {
        if (B[i] >= 65 && B[i] <= 90)
        {
            B[i] += 32;
        }
        cout << B[i];
    }
    cout << endl;

    return 0;
}