#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll n,cnt=0,mx=0;
    cin>>n;
    string s,ans;
    cin>>s;
    for(int i=0; i<s.size()-1; i+=2)
    {
        for(int j=0; j<s.size()-1; j++)
        {
            if(s[i]==s[j]&&s[i+1]==s[j+1])cnt++;
        }
        if(mx<cnt)
        {
            ans[0]=s[i];
            ans[1]=s[i+1];
            mx=cnt;
        }
        cnt=0;
    }
    cout<<ans[0]<<ans[1]<<endl;
    return 0;
}
