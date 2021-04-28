#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if((n/2)%2!=0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=2; i<=n; i+=2)
                cout<<i<<" ";
            for(i=1; i<n-2; i+=2)
                cout<<i<<" ";
            cout<<n+((n-1)/2);
        }
        cout<<endl;
    }
    return 0;
}
