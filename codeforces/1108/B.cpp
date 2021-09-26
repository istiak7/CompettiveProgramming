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
  int n;cin>>n;
  int i;
  vector<int>v;
  for(i=0;i<n;i++){
    int x;cin>>x;
    v.pb(x);
  }
  sort(v.begin(),v.end());
   cout<<v[v.size()-1]<<" ";
 for(i=v.size()-1;i>=0;i--){
    if(v[n-1]%v[i]!=0){
        cout<<v[i]<<endl;break;
    }
    else if(v[i]==v[i-1]){
        cout<<v[i]<<endl;break;
    }
 }
}



