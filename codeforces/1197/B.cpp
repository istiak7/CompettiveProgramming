///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll n,i,x;
    vector<int>v1,v2;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v1.pb(x);
        v2.pb(x);

    }
    sort(v2.begin(),v2.end());
    ll highest=v2[n-1];
    int flag=0,ans=1;
    for(i=0; i<n-1; i++)
    {
        if(highest==v1[i])flag=1;
        if(flag==0)
        {
            if(v1[i]>v1[i+1])ans=0;
        }
        if(flag==1)
        {
            if(v1[i+1]>v1[i])ans=0;
        }
    }
    if(ans==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}

