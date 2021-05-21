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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i,mx,c,flag;
        i=mx=c=flag=0;
        while(s[i]!='\0')
        {
            if(s[i]=='A'){
                    c=0;
                flag=1;
            }
            if(s[i]=='P'&&flag==1)c++;
            if(mx<c)mx=c;
            i++;
        }
        cout<<mx<<endl;
    }
    return 0;
}
