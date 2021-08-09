///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 10000
using namespace std;
int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    optimize();
     int flag,a;
     string s;
     cin>>s;cin>>a;
     if(a==1) {
        if(s=="front")flag=0;else flag=1;
     }
     else{
        if(s=="back")flag=0;else flag=1;
     }
     if(flag==1)cout<<"R"<<endl;
     else cout<<"L"<<endl;
}
