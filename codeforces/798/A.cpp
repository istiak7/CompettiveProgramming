///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
int main()
{
  optimize();
   string s,ps;
   cin>>s;
   int len=s.size();
   int i=0,cnt=0;
  for(i=0;i<s.size()/2;i++){
    if(s[i]!=s[len-1])cnt++;
    len--;
  }
   if(cnt==1)cout<<"YES"<<endl;
   else if(s.size()%2!=0&&cnt<2)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}




