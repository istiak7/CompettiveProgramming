///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int cnt=0;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]==s[i+1])cnt++;
    }
    int n_distinct=n-cnt;
    if(n_distinct+cnt>26)cout<<"-1"<<endl;
    else cout<<cnt<<endl;
}


