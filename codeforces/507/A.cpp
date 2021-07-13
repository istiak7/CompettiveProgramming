///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll n,k;
    cin>>n>>k;
    int i;
    vector<int>v1,v2,v3;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v1.pb(x);
        v2.pb(x);
    }
    sort(v2.begin(),v2.end());
    int sum=0;
    for(i=0; i<v2.size(); i++)
    {
        sum+=v2[i];
        if(sum<=k)v3.pb(v2[i]);
    }
    cout<<v3.size()<<endl;
    int j;
   for(i=0;i<n;i++){
    for(j=0;j<v3.size();j++){
        if(v1[i]==v3[j]){
                cout<<i+1<<" ";
            v3.erase(v3.begin()+j);
            break;
        }
    }
   }

    return 0;
}

