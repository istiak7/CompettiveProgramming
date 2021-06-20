#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll n,m,ans=0;
    cin>>n>>m;
    ll cnt=0;
    while(n!=0)
    {
        n--;
        cnt++;
        if(cnt==m)
        {
            n++;
            cnt=0;
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
