///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define endl '\n'
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

/*bool isprime(ll n ){
       for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
       }
       return true;
}
*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n;cin>>n;
     if(n%2==0)cout<<2<<" "<<n-3<<" "<<1<<endl;
     else{
            ll l = n/2;
        if(l%2==0)cout<<l-1<<" "<<l+1<<" "<<1<<endl;
        else cout<<l-2<<" "<<l+2<<" "<<1<<endl;
     }
    }
}
