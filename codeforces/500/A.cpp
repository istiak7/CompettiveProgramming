///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int n,t;
    cin>>n>>t;
    int i,ara[n+1];
    vector<int>v;
    for(i=1; i<n; i++)
    {
        cin>>ara[i];
        v.pb(ara[i]);
    }
    for(i=1; i<n; )
    {
        v[i+ara[i]-1]=0;
        i=i+ara[i];
    }
    v[0]=0;
    for(i=0; i<v.size(); i++)
    {
        if(v[t-1]==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}


