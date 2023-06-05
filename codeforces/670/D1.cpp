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
#define endl '\n'
#define optimize()                 \
	ios_base ::sync_with_stdio(0); \
	cin.tie(0);                    \
	cout.tie(0);
#define max_size 200001
#define M 100005
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

int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};
int d_row[] = {-1, 0, 1, 0};
int d_col[] = {0, 1, 0, -1};
const int mx = 2e5 + 123;
const ll p2 = 2e18;
const ll N = 1005;
ll arr[mx], brr[mx];

void solve()
{
	ll n, k;
	cin >> n >> k;
	VLL a(n), b(n);
	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];
	priority_queue<pi, vector<pi>, greater<pi> > pq;
	rep(i, n)
	{
		ll div = b[i] / a[i];
		ll r = a[i] - (b[i] % a[i]);
		// pq.push(make_pair(div, r));
		pq.push(make_pair(div, make_pair(r, a[i])));
	}
	// while(!pq.empty()){
	// 	cout << pq.top().first<<" "<<pq.top().second << endl;
	// 	pq.pop();
	// }
	// cout << pq.top().second.first<<endl;
	while (k > 0)
	{
		ll rr = pq.top().second.first;
		if (rr == 0)
		{
			if (pq.top().second.second <= k)
			{
				k -= pq.top().second.second;
				ll first = pq.top().first;
				ll second_f = pq.top().second.first;
				ll second_s = pq.top().second.second;
				pq.pop();
				pq.push(make_pair(first + 1, make_pair(rr, second_s)));
			}
			else
			{
				break;
			}
		}
		else if (k >= rr)
		{
			k -= rr;
			rr = 0;
			ll first = pq.top().first;
			ll second_f = pq.top().second.first;
			ll second_s = pq.top().second.second;
			pq.pop();
			pq.push(make_pair(first + 1, make_pair(rr, second_s)));
		}
		else
			break;
	}
	cout << pq.top().first << endl;
}
int main()
{
	optimize();
	solve();
}