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
    int t;cin>>t;while(t--){
   int n;cin>>n;
   vector<ll>v;
   for(int i=0;i<n;i++){
    int x;cin>>x;
    v.pb(x);
   }
   sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
      if(v[i]%2==0){
        while(v[i]%2==0){
            v[i]/=2;v[n-1]*=2;
        }
     }
   }

   sort(v.begin(),v.end());
   if(v[n-1]%2==0){ if(n>1){ll m1=v[n-1],m2=v[n-2];
   while(v[n-1]%2==0){
            v[n-1]/=2;v[n-2]*=2;
        } if(v[n-2]<m1){v[n-2]=m2;v[n-1]=m1;}
   }
   }
  ll sum=0;
   for(int i=0;i<n;i++)sum+=v[i];
  cout<<sum<<endl;
  }
}



