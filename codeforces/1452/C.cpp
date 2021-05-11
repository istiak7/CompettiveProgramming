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
        string s;
        cin>>s;
        int l=s.length();
        int  i=0,j,cnt=0,cnt2=0,c=0,cnt3=0,cnt4=0;
        while(s[i]!='\0')
        {
            if(s[i]=='[')
            {
                cnt++;
            }
            if(s[i]=='(')
            {
                cnt2++;
            }
            if(s[i]==']')
            {
                cnt3++;
                if(cnt3<=cnt)c++;
                else cnt3=0,cnt=0;
            }
            if(s[i]==')')
            {
                cnt4++;
                if(cnt4<=cnt2)c++;
                else cnt4=0,cnt2=0;
            }
            i++;

        }
        cout<<c<<endl;
    }
    return 0;
}
