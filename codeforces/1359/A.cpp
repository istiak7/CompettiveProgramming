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
        ll n,m,k;
        cin>>n>>m>>k;
        ll epc=n/k;
        if(epc>=m)
        {
            cout<<m<<endl;
            continue;
        }
        else
        {
            int sub=m-epc;
            int div= (sub/(k-1));
            if(sub%(k-1)!=0)div++;
            cout<<epc-div<<endl;
        }
    }
    return 0;
}
