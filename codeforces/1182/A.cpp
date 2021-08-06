///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    // optimize();
    ll ans;
    int n;
    cin>>n;
    if(n%2!=0) cout<<0<<endl;
    else
    {
        ans=pow(2,(n/2));
        cout<<ans<<endl;
    }
}
