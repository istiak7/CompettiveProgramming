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
      int a1,a2,k1,k2,n;
      cin>>a1>>a2>>k1>>k2>>n;
      //  min...........
        ll mini =  ( (a1*k1)-a1 )  +   ((a2*k2)-a2);
        if(n-mini<0)mini = 0; else mini=n-mini;
        cout<<mini<<" ";

        //maxi..........
         int maxi;
         if(k1<k2){if(   a1*k1<=n  ) {
           maxi= a1;
          n-=k1*maxi;
          if(a2*k2<=n)maxi+=a2;
          else maxi+=n/k2;
         }
         else maxi= n/k1;
         }
         else{
                 if(   a2*k2<=n  ) {maxi= a2;
                  n-=k2*maxi;
          if(a1*k1<=n)maxi+=a1;  else maxi+=n/k1;
         }
         else maxi= n/k2;
         }
         cout<<maxi;
}
