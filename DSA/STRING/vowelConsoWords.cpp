#include<iostream>
using namespace std;

int main(){
    // // find number of vowel and consonent
    char s[] = "my name is mohammad akhlak";
    int vowelCount = 0;
    int ConsoCount = 0;
    int i;
    cout<<s<<endl;
    cout<<"length of string ";
    for(i =0; s[i] != 0; i++){
    }
    cout<<i<<endl;
    cout << "Total vowel in given string : ";
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
            s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowelCount++;
        }

        else if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
        {
            ConsoCount++;
        }
    }
    // // printf("%d\n", vowelCount);
    cout << vowelCount << endl;
    cout << "Total consonent in given string : " << ConsoCount << endl;

    // // find number of words in string
    cout << "Total words in given string : ";
    int words=1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i - 1] != ' ')
            words++;
    }
    cout << words << endl;
    // printf("%d\n", words);

    return 0;
}