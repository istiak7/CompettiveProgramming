#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,temp;
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int len=str.size();
        int c=0,d=0,i;
        for( i=0; i<len; i++)
        {
            if(str[i]=='1')
                c++;
            if(str[i]=='0')
                d++;
        }

        //cout<<c<<" " <<d;
        int m=min(c,d);
        if(m%2!=0)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
    return 0;
}
