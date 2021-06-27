#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    string s;
    cin>>s;
    int i,cnt=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='4'||s[i]=='7')cnt++;
    }
    int num=stoi(s);
    if(s.size()==cnt)cout<<"YES"<<endl;

    else if(num%4==0||num%7==0||num%47==0||num%74==0||num%444==0||num%447==0||num%474==0||num%477==0||num%747==0||num%774==0||num%777==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
