// #include <iostream>
// using namespace std;
// int main()
// {
//     // int A[10] = {3,42,4, 2 };
//     // A[0] = 4;
//     // A[1] = 54;

//     // A[2] = 12;

//     int n;
//     cout<<"Enter size of an array : ";
//     cin>>n;
//     int A[n];

//     // // for each loop
//     // for(int x : A){

//     //     cout<<A<<endl;
//     // }
//     // normal for loop ;
//     for(int i = 0; i < n; i++){
//         cout<<A[i]<<endl;
//     }
//    cout<<sizeof(A)<<endl;

//     return 0;
// }

// struct rectangle{
//     int length;
//     int breadth;

//     int area(){
//         return length*breadth;
//     }
// };
// int main(){
//     rectangle rec; // decleration
//     // initialization
//     rec.length = 4;
//     rec.breadth = 2;
//     cout<<"Area  = "<<(rec.length*rec.breadth)<<endl;

//     // declaration + initialization
//     rectangle rect = {4,34};
//     rect.length = 4;
//     rect.breadth = 6;
//     cout<<"Area = "<<(rect.length*rect.breadth)<<endl;

//     //using memeber function
//     cout<<rec.area()<<endl;
//     cout<<rect.area()<<endl;

//     return 0;
// }

// POINTER

// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// struct rectangle
// {
//     int length;
//     int breadth;

//     void display()
//     {
//         cout << "Area = " << length * breadth << endl;
//     }
// };

// void SWAPppp(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;

// }

// // ARRAY PARAMETER

// void funtion(int *arr, int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {

//     int n;
//     cout<<"enter n :";
//     cin>>n;
//     int A[n] = {5, 5, 35, 5, 435, 5, 5, 5, 35, 5};
//     A[0] = 4;
//     A[1] = 23;
//     A[2] = 43;

//     funtion(A, n);
//     cout<<endl;

//     int a, b;
//     a = 10;
//     b = 20;

//     cout << "Before swap:" << endl;
//     cout << " a = " << a << endl;
//     cout << " b = " << b << endl;

//     cout << "After swap" << endl;

//     SWAPppp(&a, &b);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     // struture pointer using heap memory allocation
//     rectangle *rec;
//     rec = (rectangle *)malloc(sizeof(rectangle));
//     rec = new rectangle;
//     rec->length = 12;
//     rec->breadth = 10;
//     cout << "length = " << rec->length << endl;
//     cout << "breadth = " << rec->breadth << endl;
//     rec->display();
//     cout << "Area = " << rec->breadth * rec->length << endl;

//     int var = 12;
//     int *ptr;

//     ptr = &var;
//     cout << "Value of var is : " << var << endl;
//     cout << "Size od pointer : " << sizeof(ptr) << endl;
//     cout << "pointer ptr is : " << *ptr << endl;
//     cout << "Address of var is : " << &var << endl;

//     // HEAP MEMORY

//     // in C
//     int *pt;
//     pt = (int *)malloc(4 * sizeof(int));
//     pt[0] = 2;
//     pt[1] = 3;
//     pt[2] = 4;
//     pt[3] = 5;
//     for (int i = 0; i < 4; i++)
//     {
//         cout << pt[i] << " ";
//     }
//     cout << endl;
//     free(pt);

//     //  in C++
//     int *p;
//     p = new int[4];
//     p[0] = 20;
//     p[1] = 34;
//     p[2] = 4;
//     p[3] = 31;

//     for (int i = 0; i < 4; i++)
//     {
//         cout << p[i] << " ";
//     }
//     delete[] p;
//     return 0;
// }
#include<iostream>
using namespace std;
struct rect{
    int l, b;
};
int area(rect r1){
    return r1.l*r1.b;
}
int main(){
    rect r;
    r.b = 5;
    r.l = 10;
    // cout<<area(r)<<endl;
    area(r);
}