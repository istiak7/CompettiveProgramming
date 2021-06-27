#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    ll n;
    cin>>n;
    int i;
    vector<int>v= {4,7,47,74,444,447,474,477,747,774,777};
    for(i=0; i<v.size(); i++)
    {
        if(n%v[i]==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
