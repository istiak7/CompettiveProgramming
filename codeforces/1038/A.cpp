#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("d:\\code\\in.txt","rt",stdin);
    // freopen("d:\\code\\out.txt","rt",stdout);
    int n,l;
    cin>>n>>l;
    int ara[91]= {0};
    string s;
    cin>>s;
    int i=0;
    while(s[i]!='\0')
    {
        ara[s[i]]++;
        i++;
    }
//for(i=65;i<=64+l;i++)cout<<ara[i]<<" ";
    int low=100000;
    for(i=65; i<=64+l; i++)
    {
        if(ara[i]<low)
        {
            low=ara[i];
        }
    }
    cout<<low*l<<endl;
    return 0;
}
