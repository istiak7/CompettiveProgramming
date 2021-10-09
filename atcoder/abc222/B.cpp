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
       int n,p;cin>>n>>p;
       int cnt=0;
       while(n--){
          int x;cin>>x;
          if(x<p)cnt++;
       }
       cout<<cnt<<endl;
}



