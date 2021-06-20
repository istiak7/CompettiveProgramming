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
        ll x;
        cin>>x;
        v.push_back(x);
    }
    int mx=0,cnt=0;
       for(i=0; i<v.size()-1; i++)
    {
       if(v[i]<=v[i+1]){
            cnt++;
            if(mx<cnt)mx=cnt;
     }
         else if(v[i]>v[i+1]){
                cnt=0;
    }
       // cout<<mx<<" "<<cnt<<endl;
    }
    cout<<mx+1<<endl;

    return 0;
}
