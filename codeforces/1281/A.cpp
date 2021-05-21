#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size()-1;
        if(s[len]=='o')cout<<"FILIPINO"<<endl;
        else if(s[len]=='u')cout<<"JAPANESE"<<endl;
        else cout<<"KOREAN"<<endl;
    }
    return 0;
}
