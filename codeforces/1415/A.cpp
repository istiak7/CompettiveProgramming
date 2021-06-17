#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int T;
    cin>>T;
    while(T--)
    {
        ll n,m,r,c;
        cin>>n>>m>>r>>c;
        int d1,d2,d3,d4,dr1,dr2;
        d1=abs(1-r)+abs(1-c);
        d2=abs(1-r)+abs(m-c);
        dr1=max(d1,d2);

        d3=abs(n-r)+abs(1-c);
        d4=abs(n-r)+abs(m-c);
        dr2=max(d3,d4);
        int result=max(dr1,dr2);
        cout<<result<<endl;
    }
    return 0;
}


