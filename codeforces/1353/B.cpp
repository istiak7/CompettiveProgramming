#include <bits/stdc++.h>
#define ll long long int
using namespace std;
//freopen("d:\\code\\in.txt","rt",stdin);
// freopen("d:\\code\\out.txt","rt",stdout);
void error()
{
    int n,k;
    cin>>n>>k;
    int ara1[n],ara2[n];
    int i;
    for(i=0; i<n; i++)cin>>ara1[i];
    for(i=0; i<n; i++)cin>>ara2[i];
    sort(ara1,ara1+n);
    sort(ara2,ara2+n,greater<int>());
    for(i=0; i<k; i++)
    {
        if(ara1[i]<ara2[i])
            ara1[i]=ara2[i];
    }
    int sum=0;
    for(i=0; i<n; i++)sum+=ara1[i];
    cout<<sum<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        error();
    }
    return 0;
}
