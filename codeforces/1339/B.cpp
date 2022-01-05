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

 void solve(){
 int n;cin>>n;
 ll ara[n];
for(int i=1;i<=n;i++)cin>>ara[i];
 sort(ara+1,ara+1+n);
  ll m = (n+1)/2;
  cout<<ara[m]<<" ";
  for(int i=1;i<=n;i++){
    int id =m+i;
    if(id>n)break;
    cout<<ara[id]<<" ";
    id=m-i;
    if(id<1)break;
    cout<<ara[id]<<" " ;
  }
  cout<<'\n';
 }

int main()
{ optimize();
   int t;cin>>t;
   while(t--){
        solve();
   }
}
