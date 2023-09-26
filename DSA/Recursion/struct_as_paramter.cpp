// #include<iostream>
// using namespace std;

// struct rectangle{
//     int length;
//     int breadth;
// };

// int display(struct rectangle *rec,int l, int b){
//     rec->length = l;
//     rec->breadth = b;

//     cout<<"length = "<<rec->length<<endl<<"breadth = "<<rec->breadth<<endl;

//     cout<<"area in funtion : "<<rec->length*rec->breadth;
// }

// int main(){
//     rectangle rect;

//     rect.length = 10;
//     rect.breadth = 5;

//     cout<<"length = "<<rect.length<<endl<<"breadth = "<<rect.breadth<<endl;
//     cout<<"area is : "<<rect.length*rect.breadth<<endl;

//     display(&rect, 30, 20);

//     return 0;

// }

// call by value
#include <iostream>
#include <string>
using namespace std;

struct STUDENT
{
    string name;
    int roll;
};
void display(STUDENT s)
{
    s.name;
    s.roll;

    cout << "Name of strudent is : " << s.name << endl
         << "roll of student is : " << s.roll << endl;
}
int main()
{
    STUDENT s1{"ramish", 20};
    cout << "Name is : " << s1.name << endl
         << "roll is : " << s1.roll << endl;

    display(s1);

    return 0;
}

// call by refernce
#include <iostream>
using namespace std;

struct student
{
    string name;
    int roll;
};

void display(student &s)
{
    s.name;
    s.roll;
    cout << "Name is : " << s.name << endl
         << "roll is : " << s.roll << endl;
}

int main()
{
    student s2{"gotiya", 30};
    cout << "Name is : " << s2.name << endl
         << "roll is : " << s2.roll << endl;

    display(s2);
    return 0;
}

// using call by address
#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int roll;
};
void display(student *s3, string n, int r)
{
    s3->name = n;
    s3->roll = r;

    cout << "Name is : " << s3->name << endl
         << "roll is : " << s3->roll << endl;
}
int main()
{
    student s4{"gotiya", 12};

    cout << "name is : " << s4.name << endl
         << "roll is : " << s4.roll << endl;

    display(&s4, "akhlak", 4);

    return 0;
}