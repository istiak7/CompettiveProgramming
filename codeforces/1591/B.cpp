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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    vector<ll>v,v2;
        for(int i=0; i<n; i++)
        {
           ll x;cin>>x;v.pb(x);
           v2.pb(x);
        }
    sort(v.rbegin(),v.rend());
    ll mx=v[0];
   ll cnt=0,mx2=0;
    for(int i =v2.size()-1;i>=0;i--){
        if(v2[i]==mx)break;
        else if(mx2<v2[i])     cnt++;
       mx2 = max(mx2,v2[i]);
    }
       cout<<cnt<<endl;
    }
}
