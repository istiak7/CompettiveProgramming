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
    optimize();
    ll x,y;cin>>x>>y;
   if(y*log(x)>x*log(y))cout<<">"<<endl;
   else if(x*log(y)>y*log(x))cout<<"<"<<endl;
   else cout<<"="<<endl;
 }



