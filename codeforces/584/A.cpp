///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    string s;
    ll n,t;
    cin>>n>>t;
   if(n==1&&t==10)cout<<-1;
   else if(n>1&&t==10){
        cout<<1;
    for(int i=1;i<n;i++)cout<<0;
   }
    else
        for(int i=0; i<n; i++)
        {
            cout<<t;
        }
    cout<<endl;
    return 0;
}

