#include <iostream>
using namespace std;

int main()
{
    // //     // Normal Declaration
    // cout << "Normal Array Decleration" << endl;
    // int A[3][4] = {{1, 2, 4, 5}, {4, 5, 6, 9}, {6, 1, 3, 2}};
    // //  Initilization of values
    // A[0][0] = 1;
    // A[0][1] = 2;
    // A[0][2] = 3;
    // A[0][3] = 4;
    // A[1][0] = 2;
    // A[1][1] = 1;
    // A[1][2] = 9;
    // A[1][3] = 8;
    // A[2][0] = 6;
    // A[2][1] = 2;
    // A[2][2] = 4;
    // A[2][3] = 0;
    // //  printing arrays
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // // Array of pointer
    // cout << "Array of pointer " << endl;
    // int *B[3];
    // B[0] = new int[4];
    // B[1] = new int[4];
    // B[2] = new int[4];

    // B[0][0] = 1;
    // B[0][1] = 2;
    // B[0][2] = 3;
    // B[0][3] = 4;
    // B[1][0] = 2;
    // B[1][1] = 1;
    // B[1][2] = 9;
    // B[1][3] = 8;
    // B[2][0] = 6;
    // B[2][1] = 2;
    // B[2][2] = 4;
    // B[2][3] = 0;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << B[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // Double pointer

    // cout << "Double pointer" << endl;
    // int **C;
    // C = (int **)malloc(3 * sizeof(int *));

    // C[0] = new int[4];
    // C[1] = new int[4];
    // C[2] = new int[4];

    // C[0][0] = 1;
    // C[0][1] = 2;
    // C[0][2] = 3;
    // C[0][3] = 2;
    // C[1][0] = 6;
    // C[1][1] = 9;
    // C[1][2] = 1;
    // C[1][3] = 5;
    // C[2][0] = 0;
    // C[2][1] = 6;
    // C[2][2] = 2;
    // C[2][3] = 5;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << C[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    /* The line `printf("%u,%u, %u", x + 3, *(x + 3), *(x + 2) + 3);` is using the `printf` function to
    print the values of the expressions `x + 3`, `*(x + 3)`, and `*(x + 2) + 3`. */
    printf("%u,%u, %u", x + 3, *(x + 3), *(x + 2) + 3);

    return 0;
}
