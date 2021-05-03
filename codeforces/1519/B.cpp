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
        int n,m,k;
        cin>>n>>m>>k;
        int dx=(n-1);
        int dy=(m-1)*n;
        if(dx+dy==k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     //   cout<<dx+dy;
    }

    return 0;
}
