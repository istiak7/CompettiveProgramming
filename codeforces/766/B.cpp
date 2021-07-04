///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();

    vector<long long>v;
    ll n;
    cin>>n;
    ll i,j;
    for(i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    for(i=0; i<v.size()-2; i++)
    {
        for(j=i+1; j<v.size(); j++)
        {

            if(v[i]+v[j]>v[j+1])
            {
                if(v[i]+v[j+1]>v[j])
                {
                    if(v[j]+v[j+1]>v[i])
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

