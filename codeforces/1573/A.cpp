///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int main(){
  int t;cin>>t;while(t--){
      int n;cin>>n;
    string s;cin>>s;
    int sum=0,cnt=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!='0'){
            cnt++;
            sum+=s[i]-'0';
        }
    }
   int ans =  sum+cnt + (s[n-1]-'0');
   cout<<ans<<endl;
  }
}



