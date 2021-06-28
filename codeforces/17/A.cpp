#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int ara[1000000+1];
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
       int n,k,cnt=0;
    cin>>n>>k;
    vector<int>v;
    ll N=1000,i,j;
    int sq=sqrt(N);
    ara[0]=1;
    ara[1]=1;
    for(i=4; i<N; i+=2)ara[i]=1;
    for(i=3; i<sq; i+=2)
    {
        if(ara[i]==0)
        {
            for(j=i*i; j<=N; j+=i)ara[j]=1;
        }
    }
    for(i=2; i<=n; i++)
    {
        if(ara[i]==0)v.pb(i);
    }

    for(i=0; i<v.size(); i++)
    {
        for(j=0; j<v.size(); j++)
        {
            if(1+v[i]+v[i+1]==v[j]){cnt++;
            }
            if(cnt==k)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
