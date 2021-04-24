#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
      string s;
        cin>>s;
        int len=s.length();
        if(n<11)
            cout<<"NO"<<endl;
        else
        {
            l=n-11;
            for(int i=0; i<=l; i++)
            {
                if(s[i]=='8')
                {
                    cout<<"YES"<<endl;
                    c=1;
                    break;
                }
            }
            if(c==0)
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
