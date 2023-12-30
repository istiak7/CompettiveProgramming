///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define MP make_pair
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define per1(i, n) for (int i = n; i >= 1; i--)
#define min3(a,b,c)        min(a,min(b,c))
#define min4(a,b,c,d)      min(d,min3(a,b,c))
#define min5(a,b,c,d,e)    min(e,min4(a,b,c,d))
#define max3(a,b,c)        max(a,max(b,c))
#define max4(a,b,c,d)      max(d,max3(a,b,c))
#define maxv(v)    *max_element(all(v))
#define minv(v)    *min_element(all(v))
#define clr_1(x) memset(x, -1, sizeof(x))
#define all(v) (v).begin(), (v).end()
#define SORT(v) sort((v).begin(), (v).end())
#define  LCM(a,b)    a*b/__gcd(a,b)
#define  GCD(a,b)    __gcd(a,b)
#define setbits(x)      __builtin_popcountll(x)
#define clearbits(x)   __builtin_ctzll(x) // number of zeros
#define lb lower_bound
#define up upper_bound
#define F first
#define S second
#define print(ans)              \
    for (int i = 0; i < n; i++) \
        cout << ans[i] << " ";  \
    cout << endl;
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define max_size 200001
#define M 100005
#define arr array
using namespace std;
typedef vector<int> VI;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        vector<ll> a(n);
        ll pro=1;
        rep(i,n){
            cin>>a[i];
            pro*=a[i];
        }
        if(2023%pro!=0)cout<<"NO"<<'\n';
        else{
            cout<<"YES"<<'\n';
            cout<<2023/pro<<" ";
            for(int i=1;i<k;i++){
                cout<<"1"<<" ";
            }
            cout<<'\n';
        }
    }  
}
