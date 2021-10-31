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
  int n;cin>>n;char ara[n];
  for(int i=0;i<n;i+=4)ara[i]='a';
  for(int i=1;i<n;i+=4)ara[i]='a';
  for(int i=2;i<n;i+=4)ara[i]='b';
  for(int i=3;i<n;i+=4)ara[i]='b';
  for(int i =0;i<n;i++)cout<<ara[i];
  cout<<endl;
}
