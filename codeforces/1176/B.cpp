///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int main(){
   int t;cin>>t;while(t--){
    int n;cin>>n;
    int r0=0,r1=0,r2=0;
    while(n--){
        ll x;cin>>x;
        if(x%3==0)r0++;
        else if(x%3==1)r1++;
        else r2++;
    }
   cout << (r0+ ( min(r1,r2)  ) + ( max(r1,r2) -min(r1,r2) )  /3 )  <<endl;
   }
}



