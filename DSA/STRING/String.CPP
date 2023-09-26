#include <bits/stdc++.h>
using namespace std;

// reversing the string
void reversingString(char *st)
{
    int i;
    int j;
    char newStr[sizeof(st)];
    for (i = 0; st[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        newStr[j] = st[i];
    }
    newStr[j] = '\0';
    cout << newStr;
}

// validate string
int validateString(char *name)
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) &&
            !(name[i] >= 97 && name[i] <= 122) &&
            !(name[i] >= 48 && name[i] <= 57))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{

    char s[] = "MY NAME IS Mohammad Akhlak";
    int vowelCount = 0;
    int ConsoCount = 0;
    int words = 1;
    int k;
    cout << s << endl;
    // find length of string
    cout << "Length of string : ";
    for (k = 0; s[k] != '\0'; k++)
    {
    }
    // printf("%d ", i);
    cout << k << endl;
    // // find number of vowel and consonent
    // cout << "Total vowel in given string : ";
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
    //         s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    //     {
    //         vowelCount++;
    //     }

    //     else if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
    //     {
    //         ConsoCount++;
    //     }
    // }
    // // printf("%d\n", vowelCount);
    // cout << vowelCount << endl;
    // cout << "Total consonent in given string : " << ConsoCount << endl;

    // // find number of words in string
    // cout << "Total words in given string : ";
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     if (s[i] == ' ' && s[i - 1] != ' ')
    //         words++;
    // }
    // cout << words << endl;
    // // printf("%d\n", words);
    // // program to change Lower case to Upper case

    // char A[] = "mohammad akhlak";
    // for (int i = 0; A[i] != '\0'; i++)
    // {
    //     if (A[i] >= 97 && A[i] <= 122)
    //     {
    //         A[i] -= 32;
    //     }
    //     cout << A[i];
    // }
    // cout << endl;
    // // program to change upper case to lower case
    // char B[] = "MOHAMMAD AKHLAK";
    // for (int i = 0; B[i] != '\0'; i++)
    // {
    //     if (B[i] >= 65 && B[i] <= 90)
    //     {
    //         B[i] += 32;
    //     }
    //     cout << B[i];
    // }
    // cout << endl;

    // // reversing string method 1;
    // char A[] = "PYTHON";
    // char B[sizeof(A)];
    // int i,j;
    // for(i = 0; A[i] != '\0'; i++){}
    // i--;
    // for(j=0; i >=0; i--, j++){
    //     B[j] = A[i];
    // }
    // B[j] = '\0';
    // cout<<"Reverse of A is : "<<B<<endl;
    // // reversing string 2
    // char n[] = "Ramish Ahmad";
    // char temp;
    // int i, j;
    // for (j = 0; n[j] != '\0'; j++)
    // {
    // }
    // j = j - 1;
    // for (i = 0; i < j; i++, j--)
    // {
    //     temp = n[i];
    //     n[i] = n[j];
    //     n[j] = temp;
    // }
    // cout << n << endl;
    // // Chheck palindrome or not
    // char pali[] = "AKHKA";
    // char t;
    // int l, m;
    // for (m = 0; pali[m] != '\0'; m++)
    // {
    // }
    // m = m - 1;
    // for (l = 0; l < m; l++,m--)
    // {
    //     t = pali[l];
    //     pali[l] = pali[m];
    //     pali[m] = t;
    // }
    // cout<<"The reverse string is : "<<pali<<endl;
    // if (pali[l] == pali[m])
    // {
    //     cout << "The string is palindrome " << endl;
    // }
    // else
    // {
    //     cout << "Not Palindrome" << endl;
    // }

    // // validating string
    // char name[] = "mr acy12  ";
    // if (validateString(name))
    // {
    //     cout << "valid string " << endl;
    // }
    // else
    // {
    //     cout << "Invalid string" << endl;
    // }
    // // cout << validateString(name);
    // // cout << endl;

    // // comparing string i.e equal or not
    // char s1[] = "akhl";
    // char s2[] = "akhl";
    // int i, j;
    // for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
    // {
    //     if (s1[i] != s2[j])
    //     {
    //         break;
    //     }
    // }
    // if (s1[i] == s2[j])
    // {
    //     cout << "both string are equal" << endl;
    // }
    // else if (s1[i] < s2[j])
    // {
    //     cout << "String 2 is greater " << endl;
    //     cout << "String 1 is smaller" << endl;
    // }
    // else
    // {
    //     cout << "string 1 is Greater" << endl;
    //     cout << "String 2 is smaller" << endl;
    // }

    // Finding Duplicates in string

    char a[] = "finding";
    int H[26], i;

    for (i = 0; i < 26; i++)
    {
        H[i] = 0;
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        H[a[i] - 97]++;
    }
    cout << endl;
    for (i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << i + 97;
            cout << "-> " << H[i] << endl;
        }
    }

    return 0;
}
