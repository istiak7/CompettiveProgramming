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
int main(){
 string s;cin>>s;
  int i;
 ll sum,cnt=0,flag=1;
 if(s.size()==1)cnt=0;else{
 while(flag!=0){
    sum=0,i=0;
 while(s[i]!='\0'){
    sum+=s[i]-'0';
    i++;
 } cnt++;
  if(sum<10)flag=0;
  s.clear();
 s = to_string(sum);
 } }cout<<cnt<<endl;
}
