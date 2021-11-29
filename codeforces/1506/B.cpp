///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
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
  int t;cin>>t;while(t--){
      vector<int>v;
   int n,k;cin>>n>>k;
   string s;cin>>s;
  for(int i =0;i<n;i++){
    if(s[i]=='*')v.pb(i+1);
     }
     int ans=0,first,last;
     if(v.size()>=2)ans=2;
     else if(v.size()==1)ans=1;
           last=v[v.size()-1];
    for(int i=v.size()-1;i>=0;i--){
        if(last-v[i]>k){
         //   if(i==0)ans--;
                ans++;last=v[i+1];}
    } cout<<ans<<endl;
  }
}


