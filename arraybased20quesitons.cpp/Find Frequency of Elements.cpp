#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;   // total size

    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];     // total elements input

    unordered_map<int,int>freq;   // key and elements store 

    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;

    }

    for(auto it: freq)        /// for ouput ke lye
    {
    cout<<it:first<<"->"<<it.second<<"\n";
    }
    return 0;

}