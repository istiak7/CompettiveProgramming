#include <bits/stdc++.h>
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    string s;
    cin>>s;
    int len=s.length()-1;
    if(*s.begin()!='-')cout<<s<<endl;
    else
    {
        if(s[len]>s[len-1])s.erase(s.begin()+len);
        else s.erase(s.begin()+(len-1));
        if(s.size()==2&&s[1]=='0')cout<<s[1];
        else
            cout<<s<<endl;
    }
    return 0;
}
