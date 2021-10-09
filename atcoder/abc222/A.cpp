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
       int n;cin>>n;
        if(n==0)cout<<"0000"<<endl;else{
       int d = log10(n)+1;
       if(d<4){
         for(int i=0;i<4-d;i++)cout<<"0";
       }
       cout<<n<<endl;
        }
}



