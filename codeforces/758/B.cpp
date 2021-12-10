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
   string s;cin>>s;
   char c[4];int cnt[4]={},w[4]={};
   for(int i=0;i<s.size();i++){
    if(s[i]!='!'){
            c[i%4]=s[i];
        ++cnt[i%4];
    }
    ++w[i%4];
   }
   for(int i=0;i<4;i++)if(c[i]=='R')cout<<w[i]-cnt[i]<<" ";
   for(int i=0;i<4;i++)if(c[i]=='B')cout<<w[i]-cnt[i]<<" ";
   for(int i=0;i<4;i++)if(c[i]=='Y')cout<<w[i]-cnt[i]<<" ";
   for(int i=0;i<4;i++)if(c[i]=='G')cout<<w[i]-cnt[i]<<endl;
}



