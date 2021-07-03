#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int ara[1000000+1];
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int i=0,c1=0,c2=0;
        for(i=0; i<2*n; i++)
        {
            int x;
            cin>>x;
            if(x%2==0)c1++;
            else c2++;
        }
        if(c1==c2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

