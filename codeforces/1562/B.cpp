///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
bool isPrime(int number){
    bool flag=true;
    for(int l= 2; l<= number / 2; l++) {
       if(number % l == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int main()
{
    int t,num;
    cin>>t;while(t--){
    int n;cin>>n;
   string s,ss;
   cin>>s;
   int i=0,cnt=0;
    while(s[i]!='\0'){
        if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9'){
                cout<<"1"<<endl<<s[i]<<endl;cnt=1;break;}i++;
    }
    if(cnt==0){
       for(i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
        ss[0]=s[i],ss[1]=s[j];
         num=stoi(ss);
        if(isPrime(num)==false){cout<<"2"<<endl<<num<<endl;break;}
        }
        if(isPrime(num)==false)break;
        }
     }
 }
}


