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
    string s;
    cin>>s;
    int i=0,c=0,d=0;
    while(s[i]!='\0')
    {
        if(s[i]=='L')c--;
        else if(s[i]=='R') d++;
        i++;
    }
    int diff=abs(c)+abs(d);
    cout<<diff+1<<endl;
    return 0;
}
