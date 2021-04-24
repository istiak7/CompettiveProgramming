#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    string s;
    cin>>s;
    int len=s.length();
int c=0,d=0;
    for(int i=0;i<len;i++){
        if(s[i]=='a')
            d++;
else c++;
    }
    if(d>c)
        cout<<len<<endl;
    else if(d==c)
        cout<<len-1<<endl;
    else
        cout<<d+(d-1)<<endl;
    return 0;
}
