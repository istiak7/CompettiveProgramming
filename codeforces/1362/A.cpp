///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        int cnt=0;

        if(a>b){
            while(a>b){
                if(a%8==0&&a/8>=b){a/=8;cnt++;}
                else if(a%4==0&&a/4>=b){a/=4;cnt++;}
                else if(a%2==0&&a/2>=b){a/=2;cnt++;}
                else break;
            }
        }
        
        else{
              while(b>a){
                if(a*8<=b){a*=8,cnt++;}
                else if(a*4<=b){a*=4,cnt++;}
                else if(a*2<=b){a*=2,cnt++;}
                else break;
              }
        }
        cout<<( a==b ? cnt : -1)<<endl;
    }
}
