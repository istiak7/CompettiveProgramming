///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll s,n;
    cin>>s>>n;
    int i;
    vector<pair<int,int>>v;
    for(i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.pb( {x,y} );
    }
    sort(v.begin(),v.end());
    for(auto u:v)
    {
        if(s>u.first)s+=u.second;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

