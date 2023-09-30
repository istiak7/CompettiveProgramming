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
typedef pair<ll, pair<ll, ll>> pi;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
			 tree_order_statistics_node_update>
	ordered_set;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
string fact[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;
/*  vector<vector<ll> > a(n,vector<ll>(2));
		rep(i, n)cin >> a[i][0];
	pass vec in fun const vector<long long>& a
*/
int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};
int d_row[] = {-1, 0, 1, 0};
int d_col[] = {0, 1, 0, -1};
const int N = 200005;
ll d[N];

void solve()
{
	ll n, m, k;
	cin >> n >> m >> k;
	VLL a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	SORT(a);
	SORT(b);
	ll mx_a = a[n - 1];
	ll mx_b = b[m - 1];
	ll sum1 = 0, sum2 = 0, sum3 = 0;

	for (int i = 1; i <= 3; i++)
	{
		if (i == 1)
		{
			if (a[0] < b[m - 1])
			{
				ll temp = a[0];
				a[0] = b[m - 1];
				b[m - 1] = temp;
				SORT(a);
				SORT(b);
			}
			for (int i = 0; i < n; i++)
			{
				sum1 += a[i];
			}
		}
		else if (i == 2)
		{
			if (b[0] < a[n - 1])
			{
				int temp = b[0];
				b[0] = a[n - 1];
				a[n - 1] = temp;
				SORT(a);
				SORT(b);
			}
			for (int i = 0; i < n; i++)
			{
				sum2 += a[i];
			}
		}
		else
		{
			if (a[0] < b[m - 1])
			{
				ll temp = a[0];
				a[0] = b[m - 1];
				b[m - 1] = temp;
				SORT(a);
				SORT(b);
			}
			for (int i = 0; i < n; i++)
			{
				sum3 += a[i];
			}
		}
	}
	if (k == 1)
		cout << sum1 << endl;
	else if (k % 2 != 0)
		cout << sum3 << endl;
	else
		cout << sum2 << endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
}