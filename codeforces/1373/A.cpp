///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
   ll t;
   cin>>t;
   while(t--){
     ll a,b,c;
     cin>>a>>b>>c;
     ll f_shop,s_shop;
     if(a>=c){f_shop=-1;s_shop=b;}
     else if(c>=a*b){s_shop=-1;f_shop=1;}
     else {f_shop=1;s_shop=b;}
     cout<<f_shop<<" "<<s_shop<<endl;

   }
}


