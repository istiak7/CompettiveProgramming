#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;cin>>t;
   while(t--){
      int n;cin>>n;
      string s;cin>>s;
      map<char,int>mp;
      int ans=0;
      for(int i=0;i<n;i++){
         mp[s[i]]++;
         if(mp[s[i]]==(s[i]-'A')+1){
            ans++;
         }
      }
      cout<<ans << '\n';
   }
}