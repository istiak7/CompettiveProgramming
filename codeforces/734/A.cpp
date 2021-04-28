#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int i=0,c1=0,c2=0;
    while(s[i]!='\0')
    {
        if(s[i]=='A')
            c1++;
        else
            c2++;
        i++;
    }
    if(c1>c2)
        cout<<"Anton"<<endl;
    else if(c2>c1)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
