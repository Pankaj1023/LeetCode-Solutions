#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)cout<<"True";
    else cout<<"False";


    return 0;
}