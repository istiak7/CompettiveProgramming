#include <bits/stdc++.h>
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int x,i;
        cin>>x;
        if(x%2==0)
        {
            int cnt=-1;
            for(i=2; i<=x; i+=2)
            {
                cout<<i<<" ";
                cnt+=2;
                cout<<cnt<<" ";
            }
            cout<<endl;
        }
        else{
                int c2=-1;
            for(i=2;i<x;i+=2){
                cout<<i<<" ";
                c2+=2;
                if(c2<x-3)
                cout<<c2<<" ";
            }
            cout<<x<<" "<<x-2<<endl;
        }

    }
    return 0;
}
