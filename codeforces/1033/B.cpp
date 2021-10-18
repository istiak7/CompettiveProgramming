///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

bool isprime(ll n ){
       for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
       }
       return true;
}
int main(){
   int t;cin>>t;while(t--){
    ll a,b;cin>>a>>b;
 if(a>b+1){cout<<"NO"<<endl;continue;}
 ll num = a+b;
 cout<<(isprime(num)? "YES" : "NO")<<endl;
  }
}



