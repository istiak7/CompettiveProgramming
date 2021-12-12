///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define endl '\n'
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

/*bool isprime(ll n ){
       for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
       }
       return true;
}
*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        int sum=1,flag=0,five=0;

        for(int i=1; i<n; i++)
        {
            if(ara[i]==0&&ara[i-1]==0)
            {
                flag=1;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(ara[i]==1)sum++;
        }
        for(int i=0; i<n-1; i++)
        {
            if(ara[i]==1&&ara[i+1]==1&&n)five++;
        }

        if(flag==1)cout<<"-1"<<endl;
        else if(five==0)cout<<sum<<endl;
        else
        {
            cout<<((five*5) + (sum-five))<<endl;
        }
    }
}
