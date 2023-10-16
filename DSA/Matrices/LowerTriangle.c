#include <stdio.h>
#include <stdlib.h>

struct LowerTraingleMatrix
{
    int *A[10];
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
    else{
        return 0;
    }
}

void Display(struct LowerTraingleMatrix mat)
{
    int i, j;
    for(i = 1; i <= mat.n; i++){
        for(j = 1; j <= mat.n; j++){
            if(i >=i){
                printf("%d", mat.A[i]);
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}

int main()
{
    struct LowerTraingleMatrix mat;
    int i, j, x;
    printf("Enter the dimension of the matrix");
    scanf("%d", & mat.n);

    // mat.A = (int *)malloc(mat.n * (mat.n - 1) / 2 * sizeof(int));


    return 0;
}