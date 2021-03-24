#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long  int p,a,b,c,d1,d2,d3,l;
        cin>>p;
        cin>>a>>b>>c;
        l=-1;
        d1=a-(p%a);
        if(d1>=0)
            l=d1;
        d2=b-(p%b);
        if(l>d2&&d2>=0)
            l=d2;
        d3=c-(p%c);
        if(l>d3&&d2>=0)
            l=d3;
        if(p%a==0||p%b==0||p%c==0)
            l=0;
        cout<<l<<endl;

    }
    return 0;
}

