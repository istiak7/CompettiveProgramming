///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
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
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
string fact[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;

int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};
int d_row[] = {-1, 0, 1, 0};
int d_col[] = {0, 1, 0, -1};
int x_dir[] = {0, 1};
int y_dir[] = {1, 0};
const int mx = 2e5 + 123;
const ll p2 = 2e18;
const ll N = 1005;

void solve()
{
	int n;
	cin >> n;
	char grid[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> grid[i][j];
		}
	}
	// using bfs in every node
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (grid[i][j] == '1')
			{
				bool flag = false;
				bool vis[n][n];
				memset(vis, false, sizeof vis);
				queue<pair<int, int>> q;
				q.push({i, j});
				vis[i][j] = true;
				while (!q.empty())
				{
					pair<int, int> cell;
					cell = q.front();
					int x = cell.first;
					int y = cell.second;
					if (x == n - 1 || y == n - 1)
					{
						flag = true;
					}
					q.pop();
					for (int i = 0; i < 2; i++)
					{
						int adjx = x + x_dir[i];
						int adjy = y + y_dir[i];
						if (adjx >= 0 && adjx < n && adjy >= 0 && adjy < n &&
							vis[adjx][adjy] == false && grid[adjx][adjy] == '1')
						{
							q.push({adjx, adjy});
							vis[adjx][adjy] = true;
						}
					}
				}
				if (flag == false)
				{
					cout << "NO" << endl;
					return;
				}
			}
		}
	}
	cout << "YES" << endl;
}
int main()
{
	optimize();
	int t;
	cin >> t;
	while (t--)
		solve();
}