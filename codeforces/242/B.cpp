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
    int n;cin>>n;
   int ara1[n],ara2[n];
   ll mini =1000000001,maxi = 0;
   for(int i=0;i<n;i++){cin>>ara1[i]>>ara2[i];
    if(mini >ara1[i])mini = ara1[i];
    if(maxi<ara2[i])maxi= ara2[i];
   }
   int flag =0;
   for(int i=0;i<n;i++){
    if(mini ==ara1[i]&&maxi == ara2[i])flag =i+1;
   } if(flag==0)cout<<"-1"<<endl;
   else cout<<flag<<endl;
}
