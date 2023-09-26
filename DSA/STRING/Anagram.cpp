#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    char A[10];
    char B[10];
    cout << "Enter A :";
    cin >> A;
    cout << "Enter B :";
    cin >> B;

    int i, H[26];
    for (i = 0; i < 26; i++)
    {
        H[i] = 0;
    }
    for (i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97] += 1;
    }
    for (i = 0; B[i] != '\0'; i++)
    {
        H[B[i] - 97] -= 1;
        if (H[B[i] - 97] < 0)
        {
            printf("are not anagrams");
            break;
        }
    }
    if (B[i] == '\0')
    {
        cout << "Yes! Anagram" << endl;
    }
}