#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int dif=(y-x);
        if(dif%(a+b)==0)cout<<dif/(a+b)<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
