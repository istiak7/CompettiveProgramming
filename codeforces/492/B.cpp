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
    int n;cin>>n;
   ll ara[n];
    ll l;cin>>l;
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n );
   double r = max(ara[0]-0,l-ara[n-1]);
   for(int i=1;i<n;i++){
         ll d = ara[i]-ara[i-1];
        double dd= (double)d/2;
     r = max(r,dd);
   }
   printf("%.10lf\n",r);
}
