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
    int t;cin>>t;
    while(t--){
     int n;cin>>n;
     int i,j,flag=0;
   int even=0,odd=0;
     int ara[101]={0};
     for(i=0;i<n;i++){
         int x;cin>>x;
         if(x%2==0)even++;
         else odd++;
         ara[x]++;
     }
     if(even%2==0&&odd%2==0)cout<<"YES"<<endl;
     else{
            for(i=1;i<100;i++){
              if(ara[i]>0&&ara[i+1]>0)flag=1;
              if(ara[i]>0&&ara[i-1]>0)flag=1;
            }
            if(flag==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
}
}

