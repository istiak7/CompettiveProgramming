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
     ll n;cin>>n;
     int ara[n];
    int i,j,flag=0;
    for(i=0;i<n;i++)cin>>ara[i];
     for(i=0;i<n;i++){
        for(j=n-1;j>=i+2;j--){
            if(ara[i]==ara[j]){
                flag=1;
                break;
            }
        }
        if(flag==1)break;
     } if(flag==1)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
  }
}



