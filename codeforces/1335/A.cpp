#include <bits/stdc++.h>
#define ll long long int
using namespace std;
//freopen("d:\\code\\in.txt","rt",stdin);
// freopen("d:\\code\\out.txt","rt",stdout);
void error()
{
    ll n,ans;
    cin>>n;
    if(n&1)ans=(n/2);
    else ans=(n/2)-1;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) error();
    return 0;
}
