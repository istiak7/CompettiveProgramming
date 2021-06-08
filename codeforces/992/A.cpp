#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll n;
    cin>>n;
    vector<int>v;
    int i;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    for(i=0; i<v.size(); i++)
    {
        if(v[i]==0)
        {
            v.erase(v.begin()+i);
            i--;
        }
    }
    if(v.size()==0)
    {
        cout<<v.size();
        return 0;
    }
    sort(v.begin(),v.end());
    for(i=0; i<v.size()-1; i++)
    {
        if(v[i]==v[i+1])
        {
            v.erase(v.begin()+i);
            i--;
        }
    }
    cout<<v.size()<<endl;
}

