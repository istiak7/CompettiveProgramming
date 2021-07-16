///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int n,m;
    vector<string>v1,v2,v3;
    cin>>n>>m;
    int i,j;
    for(i=0; i<m; i++)
    {
        string s;
        cin>>s;
        v1.pb(s);
        string s2;
        cin>>s2;
        v2.pb(s2);
    }
    for(i=0; i<n; i++)
    {
        string s3;
        cin>>s3;
        v3.pb(s3);
        for(j=0; j<m; j++)
        {
            if(v1[j]==v3[i])
                if(v1[j].size()>v2[j].size())v3[i]=v2[j];

        }
    }
    for(i=0; i<n; i++)cout<<v3[i]<<" ";
}


