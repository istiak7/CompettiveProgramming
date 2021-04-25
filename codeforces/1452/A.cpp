#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,r;
        cin>>x>>y;
        if(x>y)
        {
            r=(2*x)-1;
            cout<<r<<endl;
        } else if(x<y)
        {
            r=(2*y)-1;
            cout<<r<<endl;
        }
        else
        {
            r=x+y;
            cout<<r<<endl;
        }
    }
    return 0;
}
