///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string s,s2;
        cin>>s;
        s2=s;
        sort(s2.begin(),s2.end());
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=s2[i])cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}


