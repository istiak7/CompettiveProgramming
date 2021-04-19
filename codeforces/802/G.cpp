#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2="heidi";
    cin>>s;
    int len=s.size();
    int i,j=0;
    for(i=0; i<len; i++)
    {
        if(s[i]==s2[j])
            j++;
        if(j==5)break;

    }
    if(j==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
