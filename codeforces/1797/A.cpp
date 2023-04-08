///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define MP make_pair
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
const ll p2 = 2e18;
const ll N = 100005;

void solve()
{
	ll n , m ; cin >> n >> m ;
	ll x1 , y1 , x2 , y2 ;
	cin >> x1 >> y1 >> x2 >> y2 ;
	ll flag = 4 ;
	if((x1 == 1 && y1 == 1)|| x2 == 1 && y2 == 1)flag = 2 ;
	else if ((x1 == 1 && y1 == m)|| x2 == 1 && y2 == m)flag = 2 ;
	else if ((x1 == n && y1 == 1)|| x2 == n && y2 == 1)flag = 2 ;
	else if ((x1 == n && y1 == m)|| x2 == n && y2 == m)flag = 2 ;

	else if(x1 == 1 || y1 == 1 || x1 == n || y1 ==m) flag = 3 ;
	
	else if(x2 == 1 || y2 == 1 || x2 == n || y2 ==m) flag = 3 ;
	
	cout << flag << endl ;
}

int main()
{
	optimize();
	int t;
	cin >> t;
	while (t--)
		solve();
}