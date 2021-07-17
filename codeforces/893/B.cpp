///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    vector<int>v= {523776,130816,32640,8128,2016,496,120,28,6,1};
    int n,i;
    cin>>n;
    for(i=0; i<v.size(); i++)
    {
        if(n%v[i]==0)
        {
            cout<<v[i]<<endl;
            break;
        }

    }

    return 0;
}


