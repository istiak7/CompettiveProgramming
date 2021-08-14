///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 10000
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
int main()
{
    optimize();
    vector<int>v;
    int t;
    cin>>t;
    int i;
    for(i=0; i<t; i++)
    {
        int x;cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    int h=1,total=1,mx=1;
    for(i=0; i<t-1; i++)
    {
        if(v[i]!=v[i+1])
        {
            total++;h=1;
        }
        else
        {
            h++;if(mx<h)mx=h;
        }
    }
    cout<<mx<<" "<<total<<endl;
    return 0;
}




