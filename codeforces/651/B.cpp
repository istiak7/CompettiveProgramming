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
int main()
{
   int n;cin>>n;
   vector<int>v;
   for(int i =0;i<n;i++){
     int x;cin>>x;v.pb(x);
   }
   sort(v.begin(),v.end());
   int jj=1,cnt=0,j;
  for(int i=0;i<n;i++){
    for(j =jj;j<n;j++){
        if(v[i]<v[j]){cnt++;break;}
    } jj=j+1;
  } cout<<cnt<<endl;
}



