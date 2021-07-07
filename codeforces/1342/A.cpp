///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        ll a,b;
        cin>>a>>b;
        ll div=max(x,y)-min(x,y);
        div=div*a;
        ll mini=min(x,y);
        if(mini*b <mini*(2*a))cout<<div+mini*b<<endl;
        else cout<<div+mini*(2*a)<<endl;

    }
    return 0;
}

