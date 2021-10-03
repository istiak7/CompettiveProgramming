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
    int t;cin>>t;
    while(t--){
 ll n,H;cin>>n>>H;
 ll i;
 vector<ll>v;
 for(i=0;i<n;i++){
    ll x;cin>>x;
    v.pb(x);
 }
 sort(v.begin(),v.end());
 ll cnt=0;

  if(v[n-1]>=H)cnt=1;
  else{
       ll temp=v[n-1]+v[n-2];
       ll div=H/temp;

        if(H%temp==0)cnt=2*div;
        else{
          if(  H%temp>v[n-1]  ) cnt =(2*div)+2;
          else cnt = (2*div)+1;
        }
  }
     cout<<cnt<<endl;
}
}

