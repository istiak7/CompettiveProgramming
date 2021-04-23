#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int cnt=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='4'||s[i]=='7')
            cnt++;
    }
    if(cnt==4||cnt==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
