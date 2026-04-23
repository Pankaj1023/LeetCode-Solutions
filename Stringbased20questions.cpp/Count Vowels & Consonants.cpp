#include<iostream>
using namespace std;
int main()
{
    int vowels =0;
    int consonants =0;

    int string s;
    cin>>s;

    for(ch:s)
    ch = tolower(ch);

    if(ch>='a' && ch<='z')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            vowels++;
        }
        else{
            consonanta++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;


}