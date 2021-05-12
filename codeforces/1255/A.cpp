#include <bits/stdc++.h>
#define ll long long int
using namespace std;
//freopen("d:\\code\\in.txt","rt",stdin);
// freopen("d:\\code\\out.txt","rt",stdout);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll d1,d2,d3,r1,r2,r3;
         ll diff=b-a;
         if(diff>=0)
         {
             d1=diff/5;
             r1=diff%5;
             d2=r1/2;
             r2=r1%2;
             d3=r2/1;
             r3=r2%1;
             cout<<d1+d2+d3<<endl;
         }
         else{
            d1=diff/(-5);
             r1=diff%(-5);
             d2=r1/(-2);
             r2=r1%(-2);
             d3=r2/(-1);
             r3=r2%(-1);
             cout<<d1+d2+d3<<endl;
         }
    }
    return 0;
}
