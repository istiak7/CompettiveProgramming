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
#define lb lower_bound
#define up upper_bound
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define max_size 200001
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
const long long int M = 1e9 + 7;
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;

int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};
const int mx = 2e5 + 123;
int cnt = 0;
void solve()
{
    int t;cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(5));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> v[i][j];
        }
    }
    bool ok = false;
    for (int i = 0; i < 5; i++)
    {

        for (int j = i + 1; j < 5; j++)
        {
            vector<vector<int>> cnt(2, vector<int>(2, 0));
            for (int k = 0; k < n; k++)
            {
                cnt[v[k][i]][v[k][j]]++;
            }
            if (cnt[0][0] == 0)
            {
                if (cnt[0][1] <= n / 2 && cnt[1][0] <= n / 2)
                    ok = true;
            }
        }
    }
    if (ok)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    }
}

int main()
{
    // optimize();
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}