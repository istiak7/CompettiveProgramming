#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,temp,j,cnt=0;
    cin>>l;
    string str;
    cin>>str;
    for(int i=0; i<l; i++)
    {
        if(str[i]=='x'&&str[i+1]=='x'&&str[i+2]=='x')
        {
            cnt++;
            temp=i;
            for(j=temp; j<l; j++)
            {
                str[j]=str[j+1];
                temp++;
            }
            l--;
            i--;
        }
    }
    cout<<cnt;
    return 0;
}
