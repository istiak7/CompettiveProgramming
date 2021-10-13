///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int main(){
    int t;cin>>t;while(t--){

      string s;cin>>s;
      int flag=0,ans1=20,ans2=20;
    for(int i =s.size()-1;i>=0;i--){
        if(s[i]=='5'){
            for(int j=i-1;j>=0;j--){
                if(s[j]=='7'||s[j]=='2'){
                 ans1=  (s.size()-1) -i  + ((i-j)-1);flag=1;break;
                }
            } if(flag==1){flag=0;break;}
        }
    }


        for(int i =s.size()-1;i>=0;i--){
        if(s[i]=='0'){
            for(int j=i-1;j>=0;j--){
                if(s[j]=='5'||s[j]=='0'){
                       ans2=  (s.size()-1) -i  + ((i-j)-1);flag=1;break;
                }
            } if(flag==1){flag=0;break;}
        }
    }

cout<<min(ans1,ans2)<<endl;
    }
}



