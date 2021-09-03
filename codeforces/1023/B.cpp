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
int main(){
 ll n,k,l;cin>>n>>k;
 if(k>n+(n-1))cout<<"0"<<endl;
 else{
        if(k>n)l=((n-(k-n))+1)/2;
        else {
            if(k%2==0)l=(k/2)-1;
            else l=k/2;
        }
       cout<<l<<endl;
   }
}


