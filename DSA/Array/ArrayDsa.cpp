#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    // int a[5];
    // cout << a[0] << endl; //  all gives garbage value
    // cout << a[1] << endl; //  all gives garbage value
    // cout << a[2] << endl; // all gives garbage value
    // cout << a[3] << endl; // all gives garbage value
    // cout << a[4] << endl; // all gives garbage value

    // int b[3] = {2, 4, 5};
    // cout << b[0] << endl;
    // cout << b[1] << endl;
    // cout << b[2] << endl;
    // cout << b[4] << endl; // gives garbage

    // int c[5] = {3, 6};
    // cout << c[0] << endl;
    // cout << c[1] << endl;
    // cout << c[3] << endl; // gives 0

    // int d[5] = {0};
    // cout << d[0] << endl; // gives 0
    // cout << d[1] << endl; // gives 0S
    // cout << d[4] << endl; // gives 0
    // cout << d[2] << endl; // gives 0
    // int e[5] = {1,2,3,5,7};
    // int *P;
    // P = new int[5]; // in C++
    // // increasing the size of an Array
    // int *resize;
    // resize = new int[10];

    // cout<<"C++"<<endl;
    // P[0] = 9;
    // P[1] = 2;
    // P[2] = 3;
    // P[3] = 6;
    // P[4] = 1;
    // for(int i = 0; i <10;i++){
    //     resize[i] = P[i];
    // }
    // cout<<"P pointer Array from heap memory "<<endl;
    // delete []P;
    // resize = P;
    // resize = NULL;
    // cout<<endl;
    // // cout<<"e Array from Stack memory "<<endl;
    // // for(int j = 0; j < 5; j++){
    // //     cout<<e[j]<<" ";
    // // }

    // cout<<endl;

    // delete[]P;

    // cout<<"C Language "<<endl;
    // int *C;
    // C = (int*)malloc(5*sizeof(int));
    // C[0] = 9;
    // C[1] = 8;
    // C[2] = 6;
    // C[3] = 4;
    // C[4] = 2;
    // cout<<"C pointer Array from heap memory"<<endl;
    // for(int i=0; i < 5; i++){
    //     cout<<C[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"e Array form stack memeory"<<endl;
    // for(int i = 0; i < 5; i++){
    //     cout<<e[i]<<" ";
    // }

    // free(C);

    // cout << "using iteration method" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << e[i] << endl;
    //     // cout<<&e[i]<<endl;
    //     printf("%u\n", &e[i]);

    // }

    // cout << "using index method" << endl;

    // cout << e[0] << endl;
    // cout << e[1] << endl;
    // cout << e[2] << endl;

    // cout << "using pointer method" << endl;

    // cout << *(e + 0) << endl;
    // cout << *(e + 1) << endl;
    // cout << *(e + 2) << endl;

    int *P;
    P = (int *)malloc(5 * sizeof(int));
    P[0] = 2;
    P[1] = 4;
    P[2] = 6;
    P[3] = 8;
    P[4] = 10;
    P[5] = 12;
    P[6] = 14;
    // P[7] = 16; P[8] = 18; P[9] = 20;
    int *Q;
    /* The line `Q = new int[10];` is dynamically allocating an array of integers with a size of 10.
    This means that memory is being allocated on the heap to store 10 integers. The pointer `Q` is
    then assigned the address of the first element of the allocated array. */
    Q = new int[10];
    // P[5] = 12;
    /* The `for` loop is iterating over the elements of the array `P`. It starts with `i` equal to 0
    and continues as long as `i` is less than 7. In each iteration, the loop body is executed, which
    in this case is printing the value of the element at index `i` in the array `P`. After each
    iteration, `i` is incremented by 1. */
    for (int i = 0; i < 7; i++)
        Q[i] = P[i];
    free(P);
    P = Q;
    Q = NULL;

    for (int i = 0; i < 7; i++)
    {

        /* The line `cout<<P[i]<<" ";` is printing the value of the element at index `i` in the array `P`.
        It is using the `cout` object to output the value to the console. The `" "` is used to separate
        the values with a space. */
        cout << P[i] << " ";
    }

    return 0;
}
