///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int n,m;
    cin>>n>>m;
    vector<int>v;
    int mx=0,div;
    int i;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.pb(x);
        if(x%m==0)
        {
            div=x/m;
            if(mx<div)mx=div;
        }
        else
        {
            div=(x/m)+1;
            if(mx<div)mx=div;
        }
    }
    for(i=v.size()-1; i>=0; i--)
    {
        if(v[i]%m==0)
        {
            if(v[i]/m==mx)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
        else
        {
            if((v[i]/m)+1==mx)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }

    }
}
