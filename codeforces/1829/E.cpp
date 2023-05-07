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
int d_row[] = {-1, 0, 1, 0};
int d_col[] = {0, 1, 0, -1};

const int mx = 2e5 + 123;
const ll p2 = 2e18;
const ll N = 1005;
bool vis[1001][1001];

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll grid[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof vis);
    ll ans = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] != 0)
            {
                queue<pair<int, int>> q;
                vis[i][j] = true;
                q.push({i, j});

                while (!q.empty())
                {
                    pair<int, int> cell;
                    cell = q.front();
                    int x = cell.first;
                    int y = cell.second;
                    mx += grid[x][y];
                    q.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int adjx = x + d_row[i];
                        int adjy = y + d_col[i];
                        if (adjx < 0 || adjy < 0 || adjx >= n || adjy >= m ||
                            vis[adjx][adjy] == true || grid[adjx][adjy] == 0)
                        {
                            continue;
                        }
                        q.push({adjx, adjy});
                        vis[adjx][adjy] = true;
                    }
                }
            }
            ans = max(ans, mx);
            mx = 0;
        }
    }
    cout << ans << endl;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}