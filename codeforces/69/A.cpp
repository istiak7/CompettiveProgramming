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
    ll t;
    cin>>t;
    ll sum1=0,sum2=0,sum3=0;
    ll x,y,z;
    while(t--)
    {
        cin>>x>>y>>z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
    if(sum1==0&&sum2==0&&sum3==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
