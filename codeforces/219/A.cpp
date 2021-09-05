///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
typedef long long ll;
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
int ara[26];
 int main()
 {
     int k;cin>>k;
     string s;cin>>s;
     for(int i=0;i<s.size();i++)
        ara[s[i]-'a']++;
        s="";
        for(int i=0;i<26;i++){if(ara[i]%k){cout<<"-1"<<endl;return 0;}
        for(int j=0;j<ara[i]/k;j++ )s+='a'+i;
 }
 for(int j=0;j<k;j++)cout<<s;
 }
