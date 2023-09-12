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

const int mx = 2e5 + 123;
const ll p2 = 2e18;
const ll N = 1005;
bool vis[1001][1001];

#define M 100005
vector<int> adjlist[M];
char c;
void addEdgeList(int u, int v)
{
    adjlist[u].pb(v);
    adjlist[v].pb(u);
}
int main()
{
    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        ll u, v;
        cin >> u >> v;
        addEdgeList(u, v);
    }
    ll flag = 0;
    // ring
    int ring = 1;
    for (int i = 1; i <= n; i++)
    {
        if (adjlist[i].size() != 2)
        {
            ring = 0;
            break;
        }
    }
    if (ring == 1)
    {
        c = 'r';
        flag++;
    }

    // star
    ll star_flag_n = 0, other_star = 0, non_star = 0;
    for (int i = 1; i <= n; i++)
    {
        if (adjlist[i].size() == n - 1)
            star_flag_n++;
        else if (adjlist[i].size() == 1)
            other_star++;
    }
    if (star_flag_n == 1 && other_star == n - 1)
    {
        c = 's';
        flag++;
    }

    // bus
    int bus_flag = 0, other_bus = 0;
    for (int i = 1; i <= n; i++)
    {
        if (adjlist[i].size() == 2)
            bus_flag++;
        else if (adjlist[i].size() == 1)
            other_bus++;
    }
    if (bus_flag == n - 2 && other_bus == 2)
    {
        c = 'b';
        flag++;
    }

    if (flag != 1)
        cout << "unknown topology" << endl;
    else
    {
        if (c == 'r')
            cout << "ring topology" << endl;
        else if (c == 's')
            cout << "star topology" << endl;
        else
            cout << "bus topology" << endl;
    }
}