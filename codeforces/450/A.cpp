///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int n,m,x;
    cin>>n>>m;
    int cnt =0,ans;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x%m==0) x/=m;
        else x=x/m+1;
        if(x>=cnt)
        {
            cnt=x;
            ans=i;
        }
    }
    cout<<ans+1<<endl;
}
