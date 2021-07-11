///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    string s;
    cin>>s;
    int k;
    cin>>k;
    if(k>s.size())
    {
        cout<<"impossible"<<endl;
        return 0;
    }
    sort(s.begin(),s.end());
    int siz=unique(s.begin(),s.end())-s.begin();
    if(k<siz)cout<<0<<endl;
    else cout<<k-siz<<endl;
    return 0;
}

