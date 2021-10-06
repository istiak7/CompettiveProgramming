///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int main(){
   int t;cin>>t;while(t--){
     int n;cin>>n;
     vector<ll>v;
     for(int i=0;i<2*n;i++){
        ll x;cin>>x;v.pb(x);
     }
     sort(v.begin(),v.end());
     n*=2;
     cout<<v[n/2]-v[(n/2)-1]<<endl;
   }
}



