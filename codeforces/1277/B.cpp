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
typedef vector<long long int> VLL;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

/*bool isprime(ll n ){
       for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
       }
       return true;
}
*/
 void F(){
 VLL v1,v2;
    int n;cin>>n;
    for(int i=0;i<n;i++){
            ll x;cin>>x;
     if(x%2==0)v1.pb(x);
    }
      for(int i=0;i<v1.size();i++){
        while(v1[i]%2==0){
            v1[i]/=2;
            v2.pb(v1[i]);
        }
      }
      sort(v2.begin(),v2.end());
      ll u = unique(v2.begin(),v2.end())-v2.begin();
      cout<<u<<'\n';
 }

int main()
{ optimize();
   int t;cin>>t;
   while(t--){
        F();
   }
}
