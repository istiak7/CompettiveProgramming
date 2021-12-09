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
   string s1,s2;cin>>s1>>s2;
   string s3;cin>>s3;
 for(int i=0;i<s3.size();i++){
    for(int j=0;j<s1.size();j++){
        if(s3[i]>='A'&&s3[i]<='Z'){
            if((s3[i]+32)==s1[j]){
             s3[i] = s2[j]-32;
           break;
            }
        }
          else  if(s3[i]==s1[j]){
            s3[i]=s2[j];
            break;
        }
    }
 }
 cout<<s3<<endl;
}



