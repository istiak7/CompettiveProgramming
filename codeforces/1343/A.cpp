#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(int i=2; i<10e9; i++)
        {
            int p=pow(2,i)-1;
            if(n%p==0)
            {
                cout<<n/p<<endl;
                break;
            }
        }
    }
    return 0;
}
