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
    string s;cin>>s;
    int i=0,one=0,two=0;
 while(s[i]!='\0'){
    if(s[i]=='1')one++;
    else two++;
    i++;
 }
   if(one==0&&two!=0)cout<<s<<endl;
   else if(two==0&&one!=0)cout<<s<<endl;
   else {
        for(i=0;i<2*s.size();i++){
            if(i%2!=0)cout<<"0";else cout<<"1";
        }
        cout<<endl;
   }
}
}

