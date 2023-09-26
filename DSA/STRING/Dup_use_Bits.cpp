#include <iostream>
using namespace std;

int main()
{
    char B[] = "akhlak";
    int H = 0, x = 0;
    printf("String is \"%s\"\n", B);
    for (int i = 0; B[i] != '\0'; i++)
    {
        x = 1;
        x = x << (B[i] - 97);
        if ((x & H) > 0)
        {
            printf("%c is duplicate\n", B[i]);
        }
        else
            H = x | H;
    }

    cout << endl;
    char A[] = "Finding";

    for (int i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x = x << (A[i] - 97);
        if (x & H > 0)
        {
            cout << " => " << A[i];
        }
        else
        {
            H = x | H;
        }
    }

    return 0;
}
