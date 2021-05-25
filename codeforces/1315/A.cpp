#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int ara[4];
        int sub1,sub2,sub3,sub4;
        int r1,r2,r3,r4;
        sub1=a-(x+1);
        ara[0]=sub1*b;

        sub2=a-(sub1+1);
        ara[1]=sub2*b;

        sub3=b-(y+1);
        ara[2]=sub3*a;

        sub4=b-(sub3+1);
        ara[3]=sub4*a;

        sort(ara,ara+4);
        cout<<ara[3]<<endl;
    }
    return 0;
}
