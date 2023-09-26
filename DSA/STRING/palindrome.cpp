#include<iostream>
using namespace std;

int main(){

    // // Chheck palindrome or not
    char pali[] = "AKHKA";
    char t;
    int l, m;
    for (m = 0; pali[m] != '\0'; m++)
    {
    }
    m = m - 1;
    for (l = 0; l < m; l++,m--)
    {
        t = pali[l];
        pali[l] = pali[m];
        pali[m] = t;
    }
    cout<<"The reverse string is : "<<pali<<endl;
    if (pali[l] == pali[m])
    {
        cout << "The string is palindrome " << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}