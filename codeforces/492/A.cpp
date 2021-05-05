#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("d:\\code\\in.txt","rt",stdin);
    // freopen("d:\\code\\out.txt","rt",stdout);
    int x,sum=0,ans,n;
    cin>>x;
    int i=1;
    while(1)
    {
        n=(i*(i+1))/2;
        sum=sum+n;

        if(sum>x)
        {
            ans=i;
            break;
        }
        i++;
    }
    cout<<ans-1;
    return 0;
}
