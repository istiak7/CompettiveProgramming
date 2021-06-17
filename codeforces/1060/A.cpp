#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
 ll n;
 cin>>n;
 string s;
 cin>>s;
 int cnt=0;
 int div=n/11;
 for(int i=0;i<s.size();i++){if(s[i]=='8')
    if(div>cnt)
    cnt++;
 }
 cout<<cnt<<endl;
}


