#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
     int n;cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    cout<<ara[n-1]-ara[0]<<'\n';
}
int main(){
 int t;cin>>t;
 while(t--){
   solve();
 }
}
