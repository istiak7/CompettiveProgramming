#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n];
        int i,r,cnt=0;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            r=sqrt(ara[i]);
            if(r*r!=ara[i])
            {
                cnt=1;
            }
        }
        if(cnt==1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
