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
int xx = 1000000;
int main(){
  int n;cin>>n;
  int mx =0,mn = xx;
 while(n--){
        int x;cin>>x;
 if(x<=xx/2)mx = max(mx,x);
 else mn = min(mn,x);
     }cout<< max( mx-1 , xx- mn )<<endl;
}

