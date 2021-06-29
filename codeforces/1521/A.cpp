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
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        cout<<a<<" "<<(a*(2*b-1))<<" "<<2*(a*b)<<endl;
    }
    return 0;
}
