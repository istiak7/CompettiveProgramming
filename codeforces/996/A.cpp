#include <bits/stdc++.h>
#define ll long long int
using namespace std;
//freopen("d:\\code\\in.txt","rt",stdin);
// freopen("d:\\code\\out.txt","rt",stdout);

int main()
{
    ll t,r1,r2,r3,r4,r5;
    ll d1,d2,d3,d4,d5;
    cin>>t;
    r1=t%100;
    d1=t/100;
    r2=r1%20;
    d2=r1/20;
    r3=r2%10;
    d3=r2/10;
    r4=r3%5;
    d4=r3/5;
    r5=r4%1;
    d5=r4/1;
    cout<<d1+d2+d3+d4+d5<<endl;
    return 0;
}
