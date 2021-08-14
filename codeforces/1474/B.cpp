///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 10000
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
int primenxt(int n){

       for(int i=n;i<=100000;i++){
           int flag=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0)flag=0;
        }
        if(flag==1){
            return i;
        }
       }
   }
int main()
{
   optimize();
    int t;
    cin>>t;
    while(t--){
        int d;cin>>d;
        int d2=d+1;

        d2=primenxt(d2);

        int d3=d2+d;
        d3=primenxt(d3);

        ll ans=d2*d3;
        cout<<ans<<endl;
    }
    return 0;
}




