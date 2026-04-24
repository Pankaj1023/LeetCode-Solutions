#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    char ch;
    cin>>ch;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==ch){
        found = true;
        break;
    }
}
if(found)
{
    cout<<"Present"<<"\n";
}
else{
    cout<<"Not present"<<"\n";
}
return 0;   
}