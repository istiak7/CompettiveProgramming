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
	ll n;
	cin >> n;
	string s;
	cin >> s;

	char ss = s[0];
	int flag1 = 0, flag2 = 0;
	for (int i = 1; i < s.size(); i++)
	{
		if (ss >= s[i])
		{
			ss = s[i];
			flag1 = i;
		}
		else if (ss == s[i])
			flag2 = i;
	}
	if (flag1 != 0)
	{
		cout << s[flag1];
		for (int i = 0; i < n; i++)
		{
			if (i == flag1)
				continue;
			cout << s[i];
		}
	}
	else if (flag2 != 0)
	{
		cout << s[flag2];
		for (int i = 0; i < n; i++)
		{
			if (i == flag2)
				continue;
			cout << s[i];
		}
	}
	else
	{
			cout << s;
	}
	cout << endl;
}

int main()
{
	optimize();
	int t;
	cin >> t;
	while (t--)
		solve();
}