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
int drow[] = {-1, 0, 1, 0};
int dcol[] = {0, 1, 0, -1};
const int mx = 2e5 + 123;
const ll p2 = 2e18;
const ll N = 100005;

void solve()
{
	ll w, h;
	cin >> w >> h;
	char ch[w + 1][h + 1];
	ll T_non = 0;
	for (int i = 1; i <= w; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			cin >> ch[i][j];
			if (ch[i][j] == '*')
				T_non++;
		}
	}
	ll plus = 0;
	for (int i = 1; i <= w; i++)
	{
		int flag = 1;
		for (int j = 1; j <= h; j++)
		{

			if (ch[i][j] == '*' && ch[i][j - 1] == '*' && ch[i][j + 1] == '*' &&
				ch[i - 1][j] == '*' && ch[i + 1][j] == '*')
			{
				// cout << i << " " << j << endl;
				int left = j, right = j, up = i, down = i;
				while (ch[i][left - 1] == '*' && left > 0)
					left--;
				// cout << j - left << endl;
				while (ch[i][right + 1] == '*' && right <= h)
					right++;
				// cout << right - j << endl;
				while (ch[up - 1][j] == '*' && up > 0)
					up--;
				// cout << i - up << endl;
				while (ch[down + 1][j] == '*' && down <= w)
					down++;
				// cout << down - i << endl;
				plus = (j - left) + (right - j) + (i - up) + (down - i) + 1;
				flag = 0;
				break;
			}
		}
		if (flag == 0)
			break;
	}

	// cout << T_non << " " << plus << endl;
	if (T_non == plus && T_non != 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main()
{
	optimize();
	// int t;
	// cin >> t;
	// while (t--)
	solve();
}