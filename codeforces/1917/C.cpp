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
typedef vector<long long int> VLL;
typedef pair<ll, pair<ll, ll>> pi;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;
/*  vector<vector<ll> > a(n,vector<ll>(2));
        rep(i, n)cin >> a[i][0];
    pass vec in fun const vector<long long>& a
*/
int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1};
int d_row[] = { -1, 0, 1, 0};
int d_col[] = {0, 1, 0, -1};
const int N = 200005;
void solve() {
    ll n , k , d; cin >> n >> k >> d;
    VLL a(n + 1 , 0);
    ll mn = INFLL;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    VLL v(k + 1 , 0);
    for (int i = 1; i <= k; ++i)
    {
        cin >> v[i];
    }
    ll mx = -INFLL;
    if (min(d, n - mn) == 0) {
        ll ans = 0 , points = 0 ;
        for (int j = 1 ; j <= n ; j++) {
            if (a[j] == j) {
                points++;
            }
        }
        mx = points + ((d - 1) / 2 );
    }
    for (int i = 0 ; i < min (d , 2 * n + 1) ; i++) {
        ll ans = 0 , points = 0 ;
        ll kk = 0;
        if (i != 0) {
            kk = (i % k);
            if (kk == 0)kk = k ;
        }

        for (int k = 1 ; k <= v[kk] ; k++) {
            a[k] += 1 ;
        }
        for (int j = 1 ; j <= n ; j++) {
            if (a[j] == j) {
                points++;
            }
        }
        if (i != 0)
            ans = points + (d - i) / 2.0;
        ans = points + ((d - i - 1) / 2 );
        mx = max(mx, ans);
    }
    cout << mx << '\n';

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int __ = 1 , cs = 1 ;
    cin >> __;
    while (__--) {
        //cout << "Case " << cs++ << ": ";
        solve();
    }
}