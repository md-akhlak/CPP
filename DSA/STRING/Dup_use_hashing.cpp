#include<iostream>
using namespace std;

int main(){
    char a[] = "finding";
    int H[26], i;

    for (i = 0; i < 26; i++)
    {
        H[i] = 0;
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        H[a[i] - 97]++;
    }
    cout << endl;
    for (i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << i + 97;
            cout << "-> " << H[i] << endl;
        }
    }
}