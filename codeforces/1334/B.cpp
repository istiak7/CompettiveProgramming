///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

/*
bool isPrime(int number){
 bool flag=true;
 for(int l= 2; l<= number / 2; l++) {
 if(number % l == 0) {
     flag = false;
     break;
    }
 }
 return flag;
} */
int main(){
  ll t;cin>>t;while(t--){
   ll n,x;cin>>n>>x;
       vector<ll>v;
       for(int i=0;i<n;i++){
            ll value;cin>>value;
          v.pb(value);
     }
     sort(v.rbegin(),v.rend());
   ll  cnt=0,sum=0,c=1;
    for(int i=0;i<v.size();i++){
            sum+=v[i];
            ll s = sum/c;
            if(s<x) break;
            else cnt++;
            c++;
    }
         cout<<cnt<<endl;
   }
}
