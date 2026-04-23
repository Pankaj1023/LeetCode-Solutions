#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count =0;

    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    cout<<count;
    return 0;
    
}