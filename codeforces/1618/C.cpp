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
    int t;
    cin>>t;
    while(t--)
    {
     int n;cin>>n;
     vector<ll>v1,v2;
     ll arra[n];
     for(int i=0;i<n;i++){cin>>arra[i];
     if(i%2==0)v1.pb(arra[i]);
     else v2.pb(arra[i]);
     }
     ll g1=v1[0],g2=v2[0];
      for(int i=0;i<v1.size();i++){
        g1=__gcd(g1,v1[i]);
      }
       for(int i=0;i<v2.size();i++){
        g2=__gcd(g2,v2[i]);
      }
      int f1=0,f2=0;
     for(int i=0;i<v1.size();i++){
        if(v1[i]%g2==0)f1=1;
     }  for(int i=0;i<v2.size();i++){
        if(v2[i]%g1==0)f2=1;
     }
   //  cout<<g1<<" "<<g2<<endl;
     if(f1==0)cout<<g2<<endl;
     else if(f2==0)cout<<g1<<endl;
     else cout<<0<<endl;
    }
}