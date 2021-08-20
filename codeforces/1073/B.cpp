///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
int main()
{
    optimize();
    int ara[max_size];
     int n;
     cin>>n;
    int i;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        ara[x]=i+1;
    }
    int temp=0;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        if(temp<ara[x]){
       cout<< ara[x]-temp<<" ";    temp=ara[x];
        }
        else cout<<"0 ";
    }
}




