// #include <stdio.h>
// #include <stdlib.h>
// #include <iostream>
// using namespace std;

// /*
// create matrix
// get element
// set element
// display matrix
// exit
// */

// int main()
// {
//     int dim, choice, x, i, j;

//     cout << "Enter Dimension of matrix : ";
//     cin >> dim;

//     int *M = new int[dim];
//     // delete [] M;
//     do
//     {
//         cout << "1 : To create matrix" << endl;
//         cout << "2 : To Get matrix Element" << endl;
//         cout << "3 : TO Set Matrix element" << endl;
//         cout << "4 : TO Display matrix" << endl;
//         cout << "0 : TO Exit" << endl;

//         switch (choice)
//         {

//         case 1:
//             cout << "Enter the non- zero elementof diagonal matrix : ";
//             for (int k = 0; k < dim; k++)
//             {
//                 cin >> M[k];
//             }
//             break;

//         case 2:
//             cout << "Enter indices " << endl;
//             cout << "Enter i : ";
//             cin >> i;
//             cout << "Enter j : ";
//             cin >> j;
//             if (i == j)
//             {
//                 cout << M[i - 1] << " ";
//             }
//             else
//             {
//                 cout << "0";
//             }
//             break;

//         case 3:
//             cout << "Enter row " << endl;
//             cin >> i;
//             cout << "Enter column " << endl;
//             cin >> j;
//             cout << "Enter element " << endl;
//             cin >> x;

//             if (i == j)
//             {
//                 M[i - 1] = x;
//             }
//             break;

//         case 4:
//             cout << "The Matrix is " << endl;
//             for (int r = 0; r < dim; r++)
//             {
//                 for (int c = 0; c < dim; c++)
//                 {
//                     if (r == c)
//                     {
//                         cout << M[r] << " ";
//                     }
//                     else
//                     {
//                         cout << "0";
//                     }
//                 }
//                 cout << endl;
//             }

//             break;

//             cout << "Enter your choice : ";
//             cin >> choice;
//         }

//     } while (choice > 0);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ch, y, i, j;

    printf("Enter Dimension of Matrix: ");
    scanf("%d", &n);
    int *B = (int *)malloc(n * sizeof(int));
    free(B);

    do
    {
        printf("\n1. Create Matrix\n");
        printf("2. Get Matrix Element\n");
        printf("3. Set Matrix Element\n");
        printf("4. Display Matrix\n");
        printf("0. Exit\n\n");

        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter non-zero elements of Diagonal Matrix:\n");
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &B[k]);
            }
            break;

        case 2:
            printf("Enter Indices: \n");
            scanf("%d%d", &i, &j);
            if (i == j)
                printf("%d ", B[i - 1]);
            else
                printf("0 ");
            break;

        case 3:
            printf("Enter row, column and element:\n");
            scanf("%d%d%d", &i, &j, &y);
            if (i == j)
                B[i - 1] = y;
            break;

        case 4:
            printf("Matrix is: \n");
            for (int r = 0; r < n; r++)
            {
                for (int c = 0; c < n; c++)
                {
                    if (r == c)
                    {
                        printf("%d ", B[r]);
                    }
                    else
                    {
                        printf("0 ");
                    }
                }
                printf("\n");
            }
            break;

            printf("Enter choice: ");
            scanf("%d", &ch);
        }
    } while (ch > 0);

    getchar();

    return 0;
}