///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int main(){
    int t;cin>>t;while(t--){
        vector<ll>v,v2;
       ll n,k;cin>>n>>k;
       for(int i=0;i<k;i++){
        ll x;cin>>x;v.pb(x);
       }
       sort(v.rbegin(),v.rend());
       ll sum=0,cnt=0,ans=0;
       int i;
     for( i=0;i<v.size();i++){
        if(cnt>=v[i]){break;}
         else {
                   cnt+=  n-v[i];
                }
     }
     cout<<i<<endl;
}
}



