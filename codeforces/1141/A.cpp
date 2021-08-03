///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll n,m;
    cin>>n>>m;
         int cnt=0;
        while(n<m){
            if(m%(n*3)==0){n*=3;cnt++;}
            else if(m%(n*2)==0){n*=2;cnt++;}
            else break;
        }
        cout<<( n==m ? cnt  : -1)<<endl;
}
