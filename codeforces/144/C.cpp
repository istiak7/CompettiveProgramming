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
int pre[26] ;
int now[26];
void solve()
{
	string s, p;
	cin >> s >> p;
	int n = p.size();
	for (int i = 0; i < n; i++)
	{
		pre[p[i] - 'a']++;
	}
	int len = s.size(), ans = 0, sum = 0;
	for (int i = 0, j = 0; i < len; i++)
	{
		if (s[i] == '?')
			sum++;
		else
		{
			int k = s[i] - 'a';
			now[k]++;
			sum++;
			while (now[k] > pre[k])
			{
				if (s[j] != '?')
					now[s[j] - 'a']--;
				j++;
				sum--;
			}
		}

		if (sum == n)
		{
			ans++;
			sum--;
			if (s[j] != '?')
				now[s[j] - 'a']--;
			j++;
		}
	}
	cout << ans << endl;
}
int main()
{
	solve();
}