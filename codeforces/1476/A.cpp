///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,ans;
        cin>>n>>k;
        if(n%k==0)ans=1;
        else if(n<k)
        {
            if(k%n==0)ans=k/n;
            else ans=(k/n)+1;
            }
        else  ans=2;
        cout<<ans<<endl;
    }
    return 0;
}

