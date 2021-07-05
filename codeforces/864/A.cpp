///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    vector<int>v;
    ll n,a,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    int vaysha=0,petya=0;
    for(i=0; i<v.size(); i++)
    {
        if(v[0]==v[i])vaysha++;
        else if(v[n-1]==v[i])petya++;
    }
    if(vaysha==petya&&vaysha+petya==n)
    {
        if(v[0]!=v[n-1])
            cout<<"YES"<<endl<<v[0]<<"  "<<v[n-1]<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}

