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
    int n;cin>>n;
    while(n--){
       string s,s2;cin>>s;
       s2=s;
       sort(s.begin(),s.end());
      int i=0,cnt=0,flag=1;
      char sf[101];
     while(s2[i]!='\0'){

            if(flag==1&&s[0]==s2[i]){flag=0;}
          else {sf[cnt]=s2[i];cnt++;}
        i++;
     }
     cout<<s[0]<<" ";for(int j=0;j<cnt;j++)cout<<sf[j];
     cout<<endl;
 }
}
