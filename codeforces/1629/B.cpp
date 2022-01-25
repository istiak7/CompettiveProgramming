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
  ll l,r,k;cin>>l>>r>>k;
  if(l==r&&r>1)cout<<"YES"<<'\n';
  else if(r==1)cout<<"NO"<<'\n';
  else{
     ll ans=(r-l)+1;
     if(ans%2==0){
        if(((ans/2))>k)cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
     }
     else{
          if(l%2==0&&r%2==0){
            if(ans/2>k)cout<<"NO"<<'\n';
            else cout<<"YES"<<'\n';
          }
          else{
                 if((ans/2)+1>k)cout<<"NO"<<'\n';
            else cout<<"YES"<<'\n';
          }
        }
     }
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
        solve();
}
