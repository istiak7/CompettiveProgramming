///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    vector<string>v;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        v.pb(s);
    }
    int mx=0,j,cnt;
    string s2;
    for(int i=0; i<v.size(); i++)
    {
        cnt=0;
        for(j=0; j<v.size(); j++)
        {
            if(v[i]==v[j])
            {
                cnt++;
            }
            if(cnt>mx)
            {
                mx=cnt;
                s2=v[i];
            }
        }
    }
    cout<<s2<<endl;
    return 0;
}

