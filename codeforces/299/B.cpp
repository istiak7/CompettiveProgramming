#include<bits/stdc++.h>
using namespace std;
#define mx 300005
int main()
{
    int n,k;
    int i;
    char ara[mx];
    cin>>n>>k;
        cin>>ara;
    int c=0;

    for(i=0; i<n; i++)
    {
        if(ara[i]=='#')
        {
            c++;
            if(c>=k)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else
            c=0;
    }
    cout<<"YES"<<endl;
    return 0;
}
