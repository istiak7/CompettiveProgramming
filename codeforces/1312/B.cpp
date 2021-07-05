///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    vector<int>v,v2;
    ll t,n,a,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.rbegin(),v.rend());
        for(i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
        v.clear();
    }
    return 0;
}

