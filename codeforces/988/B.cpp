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
  int t;cin>>t;
vector<string> v;
     for(int i=0;i<t;i++){
    string s;cin>>s;
    v.pb(s);
  }
sort(v.begin(), v.end(), []
    (const string& first, const string& second){
        return first.size() < second.size();
    });

    for(int i=0;i<t-1;i++){
   if (v[i+1].find(v[i]) == string::npos) {
           cout<<"NO"<<endl;return 0;
   }
}
cout<<"YES"<<endl;
for(auto u:v )cout<<u<<endl;
}

