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
#define clr_1(x) memset(x, -1, sizeof(x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).begin(), (v).end()
#define SORT(v) sort((v).begin(), (v).end())
#define lb lower_bound
#define up upper_bound
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
typedef pair<ll, pair<ll, ll> > pi;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
string fact[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;
/*	vector<vector<ll> > a(n,vector<ll>(2));
        rep(i, n)cin >> a[i][0];
    pass vec in fun const vector<long long>& a
*/
int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};
int d_row[] = {-1, 0, 1, 0};
int d_col[] = {0, 1, 0, -1};
ll const N = 2000000;
VLL v(N);
ll n, c;
bool ispossible(ll mid)
{
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        ll side = v[i] + (2LL * mid);
        total += side * side;
        if (total > c)
            return false;
    }
    return true;
}

void solve()
{
    cin >> n >> c;
    rep(i, n) cin >> v[i];
    ll lo = 0LL, hi = (ll)1e10;
    ll ans;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2LL;
        if (ispossible(mid))
        {
            ans = mid;
            lo = mid + 1LL;
        }
        else
            hi = mid - 1LL;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}