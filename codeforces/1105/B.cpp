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
  int n,k;
  cin>>n>>k;
  string s;cin>>s;
  int ans=0,cnt=0,ss;
  for(int i =0;i<26;i++){
    ss=0;
    for(int j=0;j<s.size();j++){
        if( s[j]-'a'==i ) cnt++;
        else cnt =0;
        if(cnt==k){
            ss++;
            cnt=0;
        }
    }ans=max(ans,ss);
  } cout<<ans<<endl;
}


