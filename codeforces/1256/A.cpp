///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll  t,a,b,n,s,flag;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        if(s/n<=a)
        {
            if(s%n<=b)flag=1;
            else flag=0;
        }
        else
        {
            if((a*n)+b>=s)flag=1;
            else flag=0;
        }
        if(flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


