#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,j,p;
    int ara[101];
    for(i=0; i<=100; i++)
    {
        ara[i]=0;
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        int ara2[n];
        for(i=0; i<n; i++)
        {
            cin>>ara2[i];
            ara[ara2[i]]++;
        }
        for(i=1; i<=100; i++)
        {
            if(ara[i]==1)
            {
                cnt=i;
            }
        }
        for(k=0; k<n; k++)
        {
            if(cnt==ara2[k])
            {
                cout<<k+1<<endl;

            }
        }
        for(p=1;p<=100;p++)
            ara[p]=0;

    }


    return 0;
}
