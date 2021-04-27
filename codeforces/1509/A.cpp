#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int t;
        cin>>t;
        int ara[t], i;
        for(i=0; i<t; i++)
        {
            cin>>ara[i];
        }
        int j;
        for(j=0; j<t; j++)
        {
            if(ara[j]%2!=0)
                cout<<ara[j]<<" ";
        }
        for(j=0; j<t; j++)
        {
            if(ara[j]%2==0)
                cout<<ara[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
