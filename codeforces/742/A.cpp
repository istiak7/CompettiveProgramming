///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll n;
    cin>>n;
    if(n==0)cout<<"1"<<endl;
    else if(n%4==0)cout<<"6"<<endl;
    else if(n%4==1)cout<<"8"<<endl;
    else if(n%4==2)cout<<"4"<<endl;
    else if(n%4==3)cout<<"2"<<endl;
    return 0;
}

