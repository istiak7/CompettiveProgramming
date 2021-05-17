#include <bits/stdc++.h>
#define ll long long int
using namespace std;
//freopen("d:\\code\\in.txt","rt",stdin);
// freopen("d:\\code\\out.txt","rt",stdout);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        int len=a.length();
        int i=0,cnt=0;
        while(a[i]!='\0')
        {
            if(c[i]==a[i]||c[i]==b[i])cnt++;
            i++;
        }
        if(cnt==len)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
