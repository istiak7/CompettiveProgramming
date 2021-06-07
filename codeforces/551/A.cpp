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
    int i,cnt;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int j;
    for(i=0; i<n; i++)
    {
        cnt=0;
        for(j=0; j<n; j++)
        {
            if(i!=j&&v[i]<v[j])cnt++;
        }
        cout<<cnt+1<<" ";
    }
}

