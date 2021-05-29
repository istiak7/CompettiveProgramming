#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    string s;
    cin>>s;
    int i,flag=2;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(flag==0)
            {
                cout<<" ";
            }
            flag=1;
            i+=2;
        }
        else
        {
            flag=0;
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
