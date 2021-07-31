///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int n;
    cin>>n;
    ll ans=n;
    for(int i=1; i<n; i++)ans+=(n-i)*i;
    cout<<ans<<endl;
}


