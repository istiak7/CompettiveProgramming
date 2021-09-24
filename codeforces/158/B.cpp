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
   int n;cin>>n;
   int i;
   int one=0,two=0,three=0,four=0;
   for(i=0;i<n;i++){
      int x;cin>>x;
       if(x==1)one++;
       else if(x==2)two++;
       else if(x==3)three++;
       else four++;
   }
     while(three>0){
        four++;
        three--;
        if(one>0)one--;
     }
     while(two>0){
        four++;
        two--;
        if(two>0)two--;
        else {
            if(one>0)one-=2;
        }
     }
     while(one>0){
        four++;
        one-=4;
     }
     cout<<four<<endl;
 }



