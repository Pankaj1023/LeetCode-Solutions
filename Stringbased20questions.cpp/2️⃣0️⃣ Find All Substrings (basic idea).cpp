#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int n = s.length();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<s.substr(i,j-i+1)
        }
    }
    return 0;
}