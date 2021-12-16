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
        string s,T;
        cin>>s>>T;
        sort(s.begin(),s.end());
        int a=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='a')a=1;
        }
        if(T=="abc")
        {

            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='a')cout<<s[i];
            }
            if(a==0)
            {
                for(int i=0; i<s.size(); i++)
                {
                    if(s[i]=='b')cout<<s[i];
                }
            }
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='c')cout<<s[i];
            }
            if(a==1)
            {
                for(int i=0; i<s.size(); i++)
                {
                    if(s[i]=='b')cout<<s[i];
                }
            }
        }
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='a')cout<<s[i];
            }
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='b')cout<<s[i];
            }
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='c')cout<<s[i];
            }
        }
        for(int i=0; i<s.size(); i++ )
        {
            if(s[i]>'c')cout<<s[i];
        }
        cout<<endl;
    }
}
