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
    ll n;cin>>n;
    ll current = 0 ,ans = 0 ;
    while(n>=current * 10 + 9){
        current=current * 10 + 9;
        ans += 9;
    }
    n-=current;
    while(n!=0){
        ans+= n% 10;
        n/=10;
    }
    cout<<ans<<endl;
}



