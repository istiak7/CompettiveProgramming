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
vector<ll>v1,v2,v3;
    ll n,i;cin>>n;
 for(i=0;i<n;i++){
    ll x;cin>>x;
    v1.pb(x);
 }
 sort(v1.begin(),v1.end());
  for(i=0;i<n-1;i++){
    ll x;cin>>x;
    v2.pb(x);
 }
 sort(v2.begin(),v2.end());
  for(i=0;i<n-2;i++){
    ll x;cin>>x;
    v3.pb(x);
 }
 sort(v3.begin(),v3.end());
 for(i=0;i<n;i++){
    if(v1[i]!=v2[i]){
        cout<<v1[i]<<endl;break;
    }
 } for(i=0;i<n-1;i++){
    if(v2[i]!=v3[i]){
        cout<<v2[i]<<endl;break;
    }
 }
return 0;
}



