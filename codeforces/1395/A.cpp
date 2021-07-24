///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int T;
    cin>>T;
    while(T--)
    {
        ll r,g,b,w;
        cin>>r>>g>>b>>w;
        if(((r%2)+(g%2)+(b%2)+(w%2) )<=1)cout<<"Yes"<<endl;
        else if( r>0&&g>0&&b>0&& ((r-1)%2 + (g-1)%2 + (b-1)%2 +(w+3)%2)<=1)
         cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}


