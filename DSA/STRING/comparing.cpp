#include<iostream>
using namespace std;
int main(){
    // // comparing string i.e equal or not
    char s1[] = "Akl";
    char s2[] = "AhL";
    int i, j;
    for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
    {
        if (s1[i] != s2[j])
        {
            break;
        }
    }
    if (s1[i] == s2[j])
    {
        cout << "both string are equal" << endl;
    }
    else if (s1[i] < s2[j])
    {
        cout << "String 2 is greater " << endl;
        cout << "String 1 is smaller" << endl;
    }
    else
    {
        cout << "string 1 is Greater" << endl;
        cout << "String 2 is smaller" << endl;
    }

    return 0;

}