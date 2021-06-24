#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll T;
    cin>>T;
    while(T--)
    {
        ll ara[3];
        int i;
        for(i=0; i<3; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+3);
        int flag=0;
        if((abs(ara[0]-ara[2]))>1)
        {
            ara[0]++;
            ara[2]--;
            flag=1;
        }
        if(flag==0)
        {
            if((abs(ara[0]-ara[2]))==1)ara[0]++;
        }
        if((ara[1]-ara[2])<0)ara[1]++;
        if((ara[1]-ara[2])>0)ara[1]--;
        // cout<<ara[0]<<" "<<ara[1]<<" "<<ara[2];
        ll v1=abs(ara[0]-ara[1]);
        ll v2=abs(ara[0]-ara[2]);
        ll v3=abs(ara[1]-ara[2]);
        cout<<v1+v2+v3<<endl;
    }
    return 0;
}
