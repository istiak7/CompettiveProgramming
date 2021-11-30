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
    ll avg,a=0,ans,n,k;cin>>n>>k;int ara[n];
    for(int i =0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    for(int i=0;i<n-1;i++){
        if ( (ara[i+1]-ara[i])>1)a=ara[i]+1;
    }
    if(ara[0]!=0)a=0;
    else{
        if(a==0)a=ara[n-1]+1;
    }
     if((a+ara[n-1])%2==0)avg=(a+ara[n-1])/2;
     else avg = ((a+ara[n-1])/2)+1;
       if(a>ara[n-1])ans = n+k;

       else{
            ll cnt=1;
            cnt=min(cnt,k);
          for(int i=0;i<n;i++){
            if(avg==ara[i])cnt=0;
          } ans=n+cnt;
       }
    cout<<ans<<endl;
    }
}


