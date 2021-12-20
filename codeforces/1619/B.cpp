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
typedef vector<int> VI;
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
   int t;cin>>t;
   while(t--){
        vector<ll>v;
   ll n;cin>>n;
   ll k=2,s=0;
   for(ll i =2;i<=n;i++){
     ll ans = pow(i,k);
     if(ans>n)break;
     v.pb(ans);
     s++;
   }
      ll l=3,c=0;
   for(ll i =2;i<=n;i++){
     ll ans = pow(i,l);
     if(ans>n)break;
     v.pb(ans);
     c++;
   }
  sort(v.begin(),v.end());
  ll u = unique(v.begin(),v.end())-v.begin();
  cout<<u+1<<endl;
   }
}
