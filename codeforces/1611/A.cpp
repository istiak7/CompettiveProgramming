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
  int t;cin>>t;
  while(t--){
    string s;cin>>s;
    int len = s.length()-1;
    int i=0,cnt=0;
    while(s[i]!='\0'){
        if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8')cnt=1;
        i++;
    }
     if(cnt==0)cout<<"-1"<<endl;
     else{
        if(s[len]=='2'||s[len]=='4'||s[len]=='6'||s[len]=='8')cout<<"0"<<endl;
        else if(s[0]=='2'||s[0]=='4'||s[0]=='6'||s[0]=='8')cout<<"1"<<endl;
        else cout<<"2"<<endl;
     }
    }
}



