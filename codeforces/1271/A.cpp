#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int a,b,c,d,e,f;
    int ara[5];
    cin>>a>>b>>c>>d>>e>>f;
    int r1=0,r2=0;
    if(e<f)
    {
        ara[0]=d,ara[1]=b,ara[2]=c;
        sort(ara,ara+3);
        r1=ara[0]*f;
        if(ara[0]!=d)
        {
            d-=ara[0];
            ara[0]=d,ara[1]=a;
            sort(ara,ara+2);
            r2=ara[0]*e;
        }

    }
    else
    {
        ara[0]=d,ara[1]=a;
        sort(ara,ara+2);
        r1=ara[0]*e;
        if(ara[0]!=d)
        {
            d-=ara[0];
            ara[0]=d,ara[1]=b,ara[2]=c;
            sort(ara,ara+3);
            r2=ara[0]*f;
        }
    }
cout<<r1+r2<<endl;
    return 0;
}
