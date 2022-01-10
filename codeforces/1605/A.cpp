///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define endl '\n'
#define F(i, n) for (int i = 0; i < (n); ++i)
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

/*bool isprime(ll n ){
       for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
       }
       return true;
}
*/

void solve()
{
   ll a1,a2,a3;cin>>a1>>a2>>a3;
   ll a=(a1+a3)-2*a2;
   if(a%3==0)cout<<"0"<<endl;
   else cout<<"1"<<endl;
}

int main()
{
    //optimize();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
