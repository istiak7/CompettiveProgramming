///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl '\n'
#define rep(i, n) for (int i = 0; i < (n); ++i)
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
int main(){
    int n;cin>>n;
    int ara[n];
    for(int i =0;i<n;i++)cin>>ara[i];
    int mx =0;
    for(int i =n-1;i>=0;i--){
        if(mx<ara[i]){mx = ara[i];ara[i] = 0;}
        else ara[i] = (mx - ara[i])+1;
    }
    for(int i =0;i<n;i++)cout<<ara[i]<<" ";
}
