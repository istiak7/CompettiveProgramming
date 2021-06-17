#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll t,a,b,n,cnt;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        cnt=0;
        while(a<=n&&b<=n)
        {
            if(a>b)b+=a;
            else a+=b;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}


