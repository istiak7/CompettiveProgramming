#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    int ara[t];
    for(i=0; i<t; i++)
    {
        cin>>ara[i];
    }
    int m=0,cnt=1,d=0;
    for(i=0; i<t-1; i++)
    {
        if(ara[i]<ara[i+1])
        {
            cnt++;
                 if(m<cnt)
                 m=cnt;
                 d=1;
        }

        else
        cnt=1;
    }
    if(d==0)m=1;
    cout<<m<<endl;
    return 0;
}
