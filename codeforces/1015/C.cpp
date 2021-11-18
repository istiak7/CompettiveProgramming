///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
//#define endl '\n'
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
    vector<ll> v;
  ll n,m;cin>>n>>m;
    ll sx=0,sy=0;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;sx+=x;sy+=y;
        v.pb(x-y);
    }
      if(sy>m)cout<<"-1"<<endl;
      else{
    sort(v.rbegin(),v.rend());
    int cnt=0;
    for (auto a : v) {
            if(sx>m) {sx-=a;cnt++;}
    }
   cout<<cnt<<endl;
}
    return 0;
}


