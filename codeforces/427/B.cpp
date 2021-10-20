///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
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
int main(){
  ll n,t,c;cin>>n>>t>>c;
  ll ans=0,cnt=0;
  for(int i=0;i<n;i++){
    ll x;cin>>x;
    if(x<=t)cnt++;
    else cnt=0;
    if(cnt>=c)ans++;
  }cout<<ans<<endl;
}



