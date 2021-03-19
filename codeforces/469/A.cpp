#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ara[n+1];
    for(i=0; i<=n; i++)
    {
        ara[i]=0;
    }
    int p1;
    cin>>p1;
    int ara1[p1];
    for(i=0; i<p1; i++)
    {
        cin>>ara1[i];
        ara[ara1[i]]++;
    }
    int p2;
        cin>>p2;
    int ara2[p2];
    for(i=0; i<p2; i++)
    {
        cin>>ara2[i];
        ara[ara2[i]]++;
    }
    for(i=1; i<=n; i++)
    {
        if(ara[i]==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
    return 0;
}
