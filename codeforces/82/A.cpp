///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int main(){
vector<string >s ={ "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
   ll n;cin>>n;
   ll i=1;
   while(true){
      for(int j=0;j<5;j++){
         if(n>i)n-=i;
         else{s[i];cout<<s[j]<<endl;return 0;}
      }
      i*=2;
   }
}



