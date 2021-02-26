#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,result;
    cin>>n;
    int a[n+1],b[n+1],c[n+1];
    int i,mx=0;
    c[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        result=b[i]+c[i-1]-a[i];
        c[i]=result;
        if(result>mx)
        {
            mx=result;
        }
    }
    cout<<mx<<endl;
    return 0;
}
