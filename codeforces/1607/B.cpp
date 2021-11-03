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
    int t;cin>>t;while(t--){
  ll x,n;cin>>x>>n;
  if(x%2==0){
        if(n%4==0)x = x;
        else if((n+3)%4==0)x=x+ (-n);
        else if((n+2) %4==0) x++;
        else if( (n+1)%4==0 ) x = x+1+n;
  }
  else{
      if(n%4==0)x =x;
    else if((n+3)%4==0) x = x + n;
      else if((n+2)%4==0) x--;
    else if((n+1)%4==0)x =x + (-1 )+(-n);

  }
  cout<<x<<endl;
    }
}
