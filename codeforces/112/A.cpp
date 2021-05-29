#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
   string s1,s2;
   cin>>s1>>s2;
for(int i=0;s1[i]!='\0';i++)s1[i]=tolower(s1[i]);
for(int i=0;s2[i]!='\0';i++)s2[i]=tolower(s2[i]);
   if(s1>s2)cout<<1<<endl;
   else if(s1<s2)cout<<-1<<endl;
   else cout<<0<<endl;
    return 0;
}
