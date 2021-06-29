#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int ara[1000000+1];
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        if(n==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        cout<<"2";
        for(i=0; i<n-1; i++)cout<<"9";
        cout<<endl;
    }
    return 0;
}
