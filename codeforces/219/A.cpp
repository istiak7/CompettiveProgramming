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
int ara[124];
int main(){
   int k;cin>>k;
   string s;cin>>s;
   int i=0;
   while(s[i]!='\0'){
    ara[s[i]]++;i++;
   }
   for(i=97;i<124;i++){
    if(ara[i]%k!=0){
        cout<<"-1"<<endl;
        return 0;
    }
   }
   char r[1001];int cnt=0,j;
   for(i=97;i<124;i++){
    if(ara[i]!=0){
        int d=ara[i]/k;
       for(j=0;j<d;j++){
            char c=i;
           // cout<<c;
            r[cnt]=c;
 cnt++;
        }
    }
   }
   while(k--){
   for(i=0;i<cnt;i++)
   cout<<r[i];
   }
}

