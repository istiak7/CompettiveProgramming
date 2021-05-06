#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("d:\\code\\in.txt","rt",stdin);
    // freopen("d:\\code\\out.txt","rt",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,len,d;
        cin>>n;
        len=log10(n)+1;
       // cout<<len<<endl;
        if(len==1)d=1;
        else if(len==2)d=11;
        else if(len==3)d=111;
        else if(len==4)d=1111;
        else if(len==5)d=11111;
        else if(len==6)d=111111;
        else if(len==7)d=1111111;
        else if(len==8)d=11111111;
        else if(len==9)d=111111111;
        else if(len==10)d=1111111111;
//cout<<d<<endl;
        long long int div=n/d;
        int ans= ((len-1)*9)+div;
        cout<<ans<<endl;
    }
    return 0;
}
