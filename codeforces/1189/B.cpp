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
int main(){
    vector<ll>v,v2;
    int n;cin>>n;ll ara[n];
     for(int i=0;i<n;i++){
        cin>>ara[i];
     }
     sort(ara,ara+n);
      for(int i =0;i<n;i++){
          if(i%2==0)v2.pb(ara[i]);
      else v.pb(ara[i]);
}
sort(v.rbegin(),v.rend());
for(int i =0 ;i<v.size();i++)v2.pb(v[i]);
int flag=1;
 for(int i=1;i<v2.size()-1;i++)if(v2[i-1]+v2[i+1]<=v2[i]){cout<<"NO"<<endl;flag=0;break;}
 if(flag==1){
    cout<<"YES"<<endl;
    for(int i=0;i<v2.size();i++)cout<<v2[i]<<" ";
 }
}
