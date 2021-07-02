#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int ara[1000000+1];
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    string s;
    cin>>s;
    int i,flag=1;
    for(i=1; i<s.size(); i++)
    {
        if(s[i]>=97)flag=0;
    }
    if(flag==0)cout<<s<<endl;
    else
    {
        for(i=0; i<s.size(); i++)
        {
            if(s[i]>=97)s[i]=toupper(s[i]);
            else s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}
