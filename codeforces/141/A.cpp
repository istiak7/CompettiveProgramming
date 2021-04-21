#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    int ara[100]= {0},ara2[100]= {0};
    int i=0;
    while(str1[i]!='\0')
    {
        ara[str1[i]]++;
        i++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        ara[str2[i]]++;
        i++;
    }
    i=0;
    while(str3[i]!='\0')
    {
        ara2[str3[i]]++;
        i++;
    }
    for(int i=65; i<90; i++)
    {
        if(ara[i]!=ara2[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
