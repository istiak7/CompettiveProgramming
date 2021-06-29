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
    ll n,x;
    cin>>n>>x;
    int i, cnt=0;
    for(i=1; i<=n; i++)
    {
        if(x%i==0)
        {
            if(x/i<=n)cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
