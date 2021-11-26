///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
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
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
int mx =0,ss=0;
    for(int i=0;i<=m-n;i++){
            int k=i,cnt=0;
        for(int j=0;j<n;j++){
            if(s[j]==t[k])cnt++;k++;
        } if(cnt>mx)ss =i;
        mx = max(mx,cnt);
    }
    cout<<n-mx<<endl;
    int j=0;
    for(int i=ss;i<ss+n;i++){
        if(s[j]!=t[i])cout<<j+1<<" ";
        j++;
    }
}


