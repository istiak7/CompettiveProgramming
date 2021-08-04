///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int n,a;
    cin>>n>>a;
    int ara[n+1];
    int i;
    for(i=1; i<=n; i++)cin>>ara[i];
    int dis=min((n-a),(a-1));
    int c=a,cnt=0;
    if(ara[a]==1)cnt++;
    for(i=a-1; i>=a-dis; i--)
    {
        c++;
        if(ara[i]==1&&ara[c]==1)cnt+=2;
    }
    for(i=1; i<a-dis; i++)
    {
        if(ara[i]==1)cnt++;
    }
    for(i=(a+dis)+1; i<=n; i++)
    {
        if(ara[i]==1)cnt++;
    }
    cout<<cnt<<endl;
}
