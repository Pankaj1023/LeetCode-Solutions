#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    int a[n] = {4,5,6,3,1,4,8,5,7,6};
    int k=3;
    int sum=0;
    int maxsum=0;
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    maxsum=sum;
    int i=0;
    int j=k;
    while(j<n)
    {
        sum-=a[i];
        sum+=a[i];
        i++;
        j--;
        maxsum = max(maxsum,sum);

    }
    cout<<maxsum<<"\n";
}