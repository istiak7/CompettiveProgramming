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
 while(t--){
        vector<int>v;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s2.size();i++){
        for(int j =0;j<s1.size();j++){
            if(s2[i]==s1[j]){v.pb(j);break;}
        }
    }
    int sum=0;
    for(int i=0;i<v.size()-1;i++){
        sum+=abs(v[i]-v[i+1] );
     // cout<<v[i]<<" ";
    }
 cout<<sum<<endl;
 }
}
