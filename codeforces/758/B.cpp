///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl '\n'
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

/*bool isprime(ll n ){
       for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
       }
       return true;
}
*/
int main()
{
   string s;cin>>s;
   int r,b,g,y;
   for(int i=0;i<s.size();i++){
    if(s[i]=='R')r=i;
    else if(s[i]=='B')b=i;
    else if(s[i]=='G')g=i;
    else if(s[i]=='Y')y=i;
   }
   int kr,kb,ky,kg;kr=kb=ky=kg=0;
    //red.........
    for(int i=r;i<s.size();i+=4)if(s[i]=='!')kr++;
    for(int i=r;i<s.size();i-=4)if(s[i]=='!')kr++;
    //blue......
    for(int i=b;i<s.size();i+=4)if(s[i]=='!')kb++;
    for(int i=b;i<s.size();i-=4)if(s[i]=='!')kb++;

    for(int i=y;i<s.size();i+=4)if(s[i]=='!')ky++;
    for(int i=y;i<s.size();i-=4)if(s[i]=='!')ky++;

    for(int i=g;i<s.size();i+=4)if(s[i]=='!')kg++;
    for(int i=g;i<s.size();i-=4)if(s[i]=='!')kg++;
    cout<<kr<<" "<<kb<<" "<<ky<<" "<<kg<<endl;
}



