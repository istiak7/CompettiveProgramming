#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,c=0;

            if(s[0]=='2'&&s[1]=='0'&&s[n-1]=='0'&&s[n-2]=='2')
                c=1;
            else if(s[0]=='2'&&s[n-1]=='0'&&s[n-2]=='2'&&s[n-3]=='0')
                c=1;
            else if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[n-1]=='0')
                c=1;
            else if(s[n-1]=='0'&&s[n-2]=='2'&&s[n-3]=='0'&&s[n-4]=='2')
                c=1;
              else if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0')
                    c=1;
        if(c==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
