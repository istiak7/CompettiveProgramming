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
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
string fact[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
const int M = 1e5 + 123;
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;

int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};
const int mx = 2e5 + 123;

void solve()
{
    int n;
    cin >> n;
    VLL a(n + 2);
    a[0] = a[n + 1] = INFLL;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 1, j = 1; i <= n;)
    {
        while (a[i] == a[j] && j <= n)
            j++;
        if (a[i] < a[i - 1] && a[j] > a[j - 1])
            cnt++;
        i = j;
    }
    cout << (cnt == 1 ? "YES\n" : "NO\n");
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        solve();
}