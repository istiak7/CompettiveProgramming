///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define endl '\n'
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define per1(i,n) for(int i=n;i>=1;i--)
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

/*bool isprime(ll n ){
       for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
       }
       return true;
}
*/

void solve()
{
    ll hc,dc;
    cin>>hc>>dc;
    ll hm,dm;
    cin>>hm>>dm;
    ll k,w,a;
    cin>>k>>w>>a;
    ll flag=0;
    for(ll i=0; i<=k; i++)
    {
        ll h=hc+(a*i);
        ll aa=dc+(w*(k-i));
        ll x,y;
        x=hm/aa;
        y=h/dm;
        if(hm%aa!=0)x++;
        if(h%dm!=0)y++;
        if(x<=y)
        {
            cout<<"YES"<<'\n';
            flag=1;
            break;
        }

    }
    if(flag==0)cout<<"NO"<<'\n';
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
