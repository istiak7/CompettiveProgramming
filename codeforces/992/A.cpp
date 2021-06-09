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
    set<int>a;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x!=0)a.insert(x);
    }
    cout<<a.size()<<endl;
}

