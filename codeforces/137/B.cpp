///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int T;
    cin>>T;
    vector<int>v;
    int i;
    for(i=0; i<T; i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }

    int cnt=0,j;
    for(i=1; i<=T; i++)
    {
        for(j=0; j<v.size(); j++)
        {
            if(i==v[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout<<T-cnt<<endl;
    return 0;
}


