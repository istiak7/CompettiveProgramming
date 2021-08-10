///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 10000
using namespace std;
int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,flag;
        cin>>n;
        flag=0;
        if(n==2||n==4)cout<<"YES"<<endl;
        else
        {
            ll add=2, i=6;;
            while(n>=add)
            {
                add= i+add;
                ll d=add*2;
                if(add==n||d==n)
                {
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
                i+=4;
            }
            if(flag==0)cout<<"NO"<<endl;
        }
    }
}


