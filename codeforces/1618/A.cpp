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
    int u;
    cin>>u;
    while(u--)
    {
      ll ara[7];
      for(int i=0;i<7;i++)cin>>ara[i];
      for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
                for(int k=j+1;k<7;k++){
                         if  ( ara[i]+ara[j]==ara[k]){ara[k]=0;break;}
                }
 
        }
      }
            for(int k=0;k<7;k++){
                if(ara[k]!=0)cout<<ara[k]<<" ";
            } cout<<endl;
    }
}