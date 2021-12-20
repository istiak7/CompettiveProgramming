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
   int t;cin>>t;
   while(t--){
   int n;cin>>n;
   ll ara[n];
   rep(i,n)cin>>ara[i];
   int flag=0;
for(int i=0;i<n-1;i++){
       ll ab=ara[i]-ara[i+1];
      if(abs(ab)>=2){
        flag=1;
        cout<<"YES"<<endl;
        cout<<i+1<<" "<<i+2<<endl;
        break;
      }
   }
   if(flag==0)cout<<"NO"<<endl;
   }
}
