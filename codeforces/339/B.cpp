#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int ara[1000000+1];
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<int>v;
    int i;
    for(i=0; i<m; i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    ll time=v[0]-1;
    for(i=0; i<m-1; i++)
    {
        if(v[i]>v[i+1])time+=((n-v[i])+1+(v[i+1]-1));
        else if(v[i]<v[i+1])time+=v[i+1]-v[i];
    }
    cout<<time<<endl;
    return 0;
}

