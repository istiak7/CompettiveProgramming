///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int n,k;
    cin>>n>>k;
    int sum=0,i=0,cnt=0;
    while(n--)
    {
        if(sum>k)
        {
            sum--;
            cnt++;
        }
        else
        {
            i++;
            sum+=i;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


