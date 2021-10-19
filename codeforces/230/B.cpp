///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
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

int ara[max_size];

void p(){
 ll i,j;
 ara[1]=1;
 for(i=0;i<max_size;i+=2)ara[i]=1;
 ara[2]=0;
  for(i=3;i<max_size;i+=2){
   for ( j = i * i; j <= max_size; j += i)ara[j] = 1;
  }
}
int main(){
    p();
    int t;cin>>t;while(t--){
      ll n,flag=0;cin>>n;
       ll root = sqrt(n);
        if(root*root ==n){
            if(ara[root]==0)flag=1;
        }
        if(flag==1)cout<<"YES"<<endl;else cout<<"NO"<<endl;
}
}



