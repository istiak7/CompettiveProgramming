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
const int mx = 2e5 + 123;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (auto &x : s)
        x = tolower(x);

    int m = 0, e = 0, o = 0, w = 0;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'm' && e == 0 && o == 0 && w == 0)
            m = 1;
        else if (s[i] == 'e' && m == 1 && o == 0 && w == 0)
        {
            e = 1;
        }
        else if (s[i] == 'o' && m == 1 && e == 1 && w == 0)
        {
            o = 1;
        }

        else if (s[i] == 'w' && m == 1 && e == 1 && o == 1)
        {
            w = 1;
        }
        else
            flag = 0;
    }
    if (m == 1 && e == 1 && o == 1 && w == 1 && flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        solve();
}