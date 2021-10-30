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
    vector<ll>v;
    int n;cin>>n;ll ara[n];
     for(int i=0;i<n;i++){
        cin>>ara[i];
     }
     sort(ara,ara+n);
     int flag=0;
     for(int i =n/2;i<n;i++){
            v.pb(ara[i]);
     if(flag<n/2)  v.pb(ara[flag]);
           flag++;
     }
int cnt=0;
   for(int i=1;i<n-1;i++){
    if(v[i]<v[i-1]&&v[i]<v[i+1])cnt++;
   }
 cout<<cnt<<endl;
 for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
 cout<<endl;
}
