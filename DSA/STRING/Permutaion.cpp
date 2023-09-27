#include <iostream>
using namespace std;
// swap 
void SWAP(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// permutation using swap
void Swap_Permutation(char S[], int low, int high)
{
    int i;
    if (low == high)
    {
        cout << S << endl;
    }
    else
    {
        for (i = low; i <= high; i++)
        {
            SWAP(&S[low], &S[i]);
            Swap_Permutation(S, low + 1, high);
            SWAP(&S[low], &S[i]);
        }
    }
}
// permutation using brute force
void Permutaion(char A[], int k)
{
    static char S[10] = {0};
    static char R[10];
    int i;
    if (A[k] == '\0')
    {
        R[k] = '\0';
        cout << R << endl;
    }
    else
    {
        for (i = 0; A[i] != '\0'; i++)
        {
            if (S[i] == 0)
            {
                R[k] = A[i];
                S[i] = 1;
                Permutaion(A, k + 1);
                S[i] = 0;
            }
        }
    }
}

int main()
{
    char S[] = "ABC";
    cout<<"Permutaion is "<<endl;
    Swap_Permutation(S, 0, 2);
    cout<<endl;
    cout<<"Permutaion is "<<endl;
    Permutaion(S, 0);

    return 0;
}