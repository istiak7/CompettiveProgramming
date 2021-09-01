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

int main()
{
    int q;
    cin>>q;
    while(q--){
    ll n,ans=0,t=0;
    cin>>n;
    for(int i=1; i<=n/2; i++)
    {
        t+=8;
        ans=ans+(t*i);
    }
    cout<<ans<<endl;
    }
}


