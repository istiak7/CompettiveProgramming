#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    cin>>str;
    int len=str.length();
    int cup=0,clow=0;
    for(int i=0; i<len; i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            cup++;
        }
        else
            clow++;
    }
    if(cup>clow)
    {
        for(int i=0; i<len; i++)
        {
            if(str[i]>='a'&&str[i]<='z')
                str[i]='A'+(str[i]-97);
        }
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
                str[i]='a'+(str[i]- 65);
        }
    }
        cout<<str<<endl;
    return 0;
}