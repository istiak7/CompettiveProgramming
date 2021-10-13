///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int main(){
    int t;cin>>t;while(t--){
    ll a,b,c;cin>>a>>b>>c;
    ll m = max (max(a,b) ,c);
    ll r1,r2,r3;
    int cnt=0;
    if(m==a)cnt++;if(m==b)cnt++;if(m==c)cnt++;
    if(m==a&&m==b&&m==c)cout<<1<<" "<<1<<" "<<1<<endl;
    else if(cnt==1){
    if(a!=m)r1 =(m-a)+1;else r1 = 0;
    if(b!=m)r2 = (m-b)+1;else r2 = 0;
    if(c!=m)r3 = (m-c)+1;else r3 = 0;
        cout<<r1<<" "<<r2<<" "<<r3<<endl;
    }
       else{
          if(a==m)r1 =1;else r1 =(m-a)+1;
          if(b==m)r2=1;else r2 = (m-b)+1;
          if(c==m)r3=1;else r3 = (m-c)+1;
               cout<<r1<<" "<<r2<<" "<<r3<<endl;
       }

    }
}



