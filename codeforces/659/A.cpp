///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 10000
using namespace std;
int main()
{
    optimize();
    int n,a,b;
    cin>>n>>a>>b;
    if(b>=0)
    {
        int r=(a+b)%n;
        if(r==0)cout<<n<<endl;
        else cout<<r<<endl;
    }
    else
    {
        int i,cnt=0;
        for(i=a-1; ; i--)
        {
            if(i==0)i=n;
            cnt++;
            if(cnt==abs(b))break;
        }
        cout<<i<<endl;
    }
}
