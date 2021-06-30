#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int ara[1000000+1];
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll a,b,c,ans;
    cin>>a>>b>>c;
    ans=a*b*c;
    ans=max(ans,   (a+b)*c);
    ans=max(ans, a*(b+c));
    ans=max(ans,a+b+c);
    cout<<ans<<endl;
    return 0;
}
