#include <stdio.h>
#include <stdlib.h>

// Using Row major Formula
struct LowerTraingleMatrix
{
    int *A;
    int n;
};

void Set(struct LowerTraingleMatrix *mat, int i, int j, int x)
{
    if (i >= j)
    {
        mat->A[i * (i - 1) / 2 + j - 1] = x;
    }
}

int Get(struct LowerTraingleMatrix mat, int i, int j)
{
    if (i >= j)
    {
        return mat.A[i * (i - 1) / 2 + j - 1];
    }
    else
    {
        return 0;
    }
}

void Display(struct LowerTraingleMatrix mat)
{
    int i, j;
    for (i = 1; i <= mat.n; i++)
    {
        for (j = 1; j <= mat.n; j++)
        {
            if (i >= i)
            {
                printf("%d ", mat.A[i * (i - 1) / 2 + j - 1]);
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}

// Using column major formula

struct ColumnMajorMatrix
{
    int *B;
    int dim;
};

void setColumnMajorMatrix(struct ColumnMajorMatrix *mat, int i, int j, int x)
{
    if (i >= j)
    {
        mat->B[mat->dim * (j - 1) + (j - 2) * (j - 1) / 2 + i - j] = x;
    }
}

int getColumnMajorMatrix(struct ColumnMajorMatrix mat, int i, int j)
{
    if (i >= j)
    {
        return mat.B[mat.dim * (j - 1) + (j - 2) * (j - 1) / 2 + i - j];
    }
}

void displayColumnMajorMatrix(struct ColumnMajorMatrix mat)
{
    int i, j;
    for (i = 1; i <= mat.dim; i++)
    {
        for (j = 1; j <= mat.dim; j++)
        {
            if (i >= j)
            {
                printf("%d", mat.dim * (j - 1) + (j - 2) * (j - 1) / 2 + i - j);
            }
            else
            {
                printf("0");
            }
        }
    }
}

// Driver function
int main()
{
    // row major matrix

    printf("Row major matrix \n");
    struct LowerTraingleMatrix mat;
    int i, j, x;
    printf("Enter the dimension of the matrix: \n");
    scanf("%d", &mat.n);

    mat.A = (int *)malloc(mat.n * (mat.n - 1) / 2 * sizeof(int));

    printf("Enter all Elements of the matrix : \n");
    for (i = 1; i <= mat.n; i++)
    {
        for (j = 1; j <= mat.n; j++)
        {
            scanf("%d", &x);
            Set(&mat, i, j, x);
        }
    }
    printf("\n\n");
    Display(mat);

    // column major matrix
    printf("Colunm major matrix \n");

    struct ColumnMajorMatrix colMat;
    ;
    int x, y, z;
    printf("Enter the dimension of the matrix: \n");
    scanf("%d", &colMat.dim);

    colMat.B = (int *)malloc(colMat.dim * (colMat.dim - 1) / 2 * sizeof(int));

    printf("Enter all Elements of the matrix : \n");
    for (x = 1; x <= colMat.dim; x++)
    {
        for (y = 1; y <= colMat.dim; y++)
        {
            scanf("%d", &z);
            setColumnMajorMatrix(&colMat, x, y, z);
        }
    }
    printf("\n\n");
    displayColumnMajorMatrix(colMat);

    return 0;
}